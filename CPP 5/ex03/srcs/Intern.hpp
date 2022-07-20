/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 00:14:10 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 19:34:40 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
    private:
        class NoFormFound : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
    public:
        Intern();
        ~Intern();
        Intern(const Intern & intern);
        Intern & operator=(const Intern & inter);
        Form* makeForm(std::string type ,std::string target);
};



#endif