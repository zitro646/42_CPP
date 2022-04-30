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

int main (void)
{ 
	try
	{
		Bureaucrat				bureu("Juan", 137);
		Bureaucrat				bureu2("Trebor", 5);
		Bureaucrat				bureu3("Hermes", 36);
		ShrubberyCreationForm	form("Creation Receipt");
		RobotomyRequestForm		form2("Robotomy");
		PresidentialPardonForm	form3("Pedro_on_jail");
		std::cout<< "- - - - - - - - - - - - - "<<std::endl;
		bureu.signForm(form);
		bureu.signForm(form2);
		bureu.signForm(form3);
		std::cout<< "- - - - - - - - - - - - - "<<std::endl;
		bureu2.signForm(form);
		bureu2.signForm(form2);
		bureu2.signForm(form3);
		std::cout<< "- - - - - - - - - - - - - "<<std::endl;
		bureu3.signForm(form);
		bureu3.signForm(form2);
		bureu3.signForm(form3);
		std::cout<< "- - - - - - - - - - - - - "<<std::endl;
		bureu.executeForm(form);
		bureu.executeForm(form2);
		bureu.executeForm(form3);
		std::cout<< "- - - - - - - - - - - - - "<<std::endl;
		bureu2.executeForm(form);
		bureu2.executeForm(form2);
		bureu2.executeForm(form3);
		std::cout<< "- - - - - - - - - - - - - "<<std::endl;
		bureu3.executeForm(form);
		bureu3.executeForm(form2);
		bureu3.executeForm(form3);
		
	}
	catch (std::exception & e)
	{
		std::cout<< "The test somehow have failed beacuse of "<< e.what()<<std::endl;
	}
	return (0);
}