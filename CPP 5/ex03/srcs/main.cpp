/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:56:38 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/29 16:07:50 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
/*
void leaks(void)
{
	system("leaks -q test");
}*/


int main (void)
{ 
	//atexit(leaks);
	try
	{
		Intern		*intern = new Intern();
		Bureaucrat	*bureu = new Bureaucrat("Juan", 137);
		Bureaucrat	*bureu2 = new Bureaucrat("Trebor", 5);
		Bureaucrat	*bureu3 = new Bureaucrat("Hermes", 36);
		//PresidentialPardonForm , RobotomyRequestForm , ShrubberyCreationForm
		Form 		*form = intern->makeForm("ShrubberyCreationForm", "Alex");
		std::cout<< "- - - - - - - - - - - - - "<<std::endl;
		bureu->signForm(*form);
		bureu2->signForm(*form);
		bureu3->signForm(*form);
		std::cout<< "- - - - - - - - - - - - - "<<std::endl;
		
	}
	catch (std::exception & e)
	{
		std::cout<< "The test somehow have failed beacuse of "<< e.what()<<std::endl;
	}
	return (0);
}