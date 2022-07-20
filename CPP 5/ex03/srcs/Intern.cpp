/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 00:55:36 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 19:37:28 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//Canonic Functions

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

//Funciones que lanzan las excepciones
const char* Intern::NoFormFound::what() const throw()
{
	return ( "No Form Found");
}

//Funciones
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
    if (creation == NULL)
        throw Intern::NoFormFound();
    return creation;
}