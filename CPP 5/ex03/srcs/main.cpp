/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:56:38 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 19:47:30 by mortiz-d         ###   ########.fr       */
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
	Intern		*intern = new Intern();
	Bureaucrat	*bureu = new Bureaucrat("Juan", 148);
	Bureaucrat	*bureu2 = new Bureaucrat("Trebor", 36);
	 Bureaucrat	*bureu3 = new Bureaucrat("Hermes", 5);
	std::cout << std::endl<< "- - - - - - - - - - - - - "<<std::endl;
	std::cout<< "- -Let's create a form- - "<<std::endl;
	std::cout<< "- - - - - - - - - - - - - "<<std::endl;
	try
	{
		//PresidentialPardonForm , RobotomyRequestForm , ShrubberyCreationForm
		Form 	*form = intern->makeForm("PresidentialPardonForm", "Alex");
		bureu2->signForm(*form);
		bureu3->signForm(*form);
		bureu2->executeForm(*form);
		bureu3->executeForm(*form);
	}
	catch (std::exception & e)
	{
		std::cout<< "The test has failed beacuse of "<< e.what()<<std::endl;
	}
	std::cout << std::endl<< "- - - - - - - - - - - - - "<<std::endl;
	std::cout<< "- -Testing form 2 fail- - "<<std::endl;
	std::cout<< "- - - - - - - - - - - - - "<<std::endl;
	try
	{
		//PresidentialPardonForm , RobotomyRequestForm , ShrubberyCreationForm
		Form 	*form2 = intern->makeForm("UnknowForm", "Born 2 Fail");
		bureu->signForm(*form2);
	}
	catch (std::exception & e)
	{
		std::cout<< "The test has failed beacuse of "<< e.what()<<std::endl;
	}
	return (0);
}