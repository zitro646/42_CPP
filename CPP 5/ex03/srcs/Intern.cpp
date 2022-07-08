/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz <mortiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 00:55:36 by root              #+#    #+#             */
/*   Updated: 2022/07/08 16:42:11 by mortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    return;
}

Intern::Intern(const Intern & inter)
{
    *this = inter;
}

Intern::~Intern()
{
    return;
}

Intern & Intern::operator=(const Intern & inter)
{
    if (this == &inter)
        return *this;
    return *this;
}

Form* Intern::makeForm(std::string type ,std::string target)
{
    Form *creation = NULL;
    std::string array[3] = {"PresidentialPardonForm","RobotomyRequestForm","ShrubberyCreationForm" };
    Form *function[3] = {new PresidentialPardonForm(target) , new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};

    for (int i = 0; i < 3; i++)
    {
        if (array[i] == type)
        {
            creation = function[i];
            break;
        }
    }
    for ( int i = 0; i < 3; i++)
    {
        if (creation != function[i])
            delete function[i];
    }
    
    return creation;
}