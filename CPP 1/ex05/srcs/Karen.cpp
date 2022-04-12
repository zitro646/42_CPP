/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:56:48 by root              #+#    #+#             */
/*   Updated: 2022/04/12 13:54:06 by root             ###   ########.fr       */
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
    std::cout<<"KAREN DEBUG"<<std::endl;
}

void Karen::info( void )
{
    std::cout<<"KAREN INFO"<<std::endl;
}

void Karen::warning( void )
{
    std::cout<<"KAREN WARNING"<<std::endl;
}

void Karen::error( void )
{
    std::cout<<"KAREN ERROR"<<std::endl;
}
