/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 00:55:36 by root              #+#    #+#             */
/*   Updated: 2022/05/01 01:24:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    return;
}

Intern::~Intern()
{
    return;
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