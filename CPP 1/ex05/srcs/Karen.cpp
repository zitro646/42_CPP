/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:56:48 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/05/02 09:43:37 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
    return;
}

Karen::~Karen(void)
{
    return;
}

void Karen::complain (std::string complain)
{
    int i;

    std::string str[4] = {"WARNING","DEBUG","INFO","ERROR"};
    Karen::funptr function[4] = {&Karen::warning , &Karen::debug, &Karen::info, &Karen::error};

    i = 0;
    while (i < 4)
    {
        if (str[i] == complain)
            break;
        i++;
    }
    if (i == 4)
        std::cout<<"KAREN MUMBLES AROUND"<<std::endl;
    else
        (this->*(function[i]))();
}

void Karen::debug( void )
{
    std::cout<<"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!."<<std::endl;
}

void Karen::info( void )
{
    std::cout<<"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!."<<std::endl;
}

void Karen::warning( void )
{
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month..."<<std::endl;
}

void Karen::error( void )
{
    std::cout<<"This is unacceptable, I want to speak to the manager now..."<<std::endl;
}
