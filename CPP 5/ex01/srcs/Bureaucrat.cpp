/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:56:23 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 18:21:17 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Funciones canonicas
Bureaucrat::Bureaucrat(std::string str, int i) : name(str)
{
	if (i > 150)
		GradeTooLowException();
	if (i < 1)
		GradeTooHighException();
	this->grade = i;
	std::cout << this->name << " was created with a grade of "<< i<<std::endl;
	return;
}

Bureaucrat::~Bureaucrat()
{
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat & bureu)
{
	*this = bureu;
}

Bureaucrat Bureaucrat::operator=(const Bureaucrat & bureu)
{
	this->grade = bureu.grade;
	return (*this);
}

//Funciones que lanzan las excepciones
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ( "Grade is to high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ( "Grade is to low");
}

//Getters 
std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}
//Funcion para incrementar el rango

void Bureaucrat::increaseGrade(void)
{
	if (getGrade() - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::decreaseGrade(void)
{
	if (getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

//Funcion para el output

std::ostream &operator<<(std::ostream& os, const Bureaucrat &bureu)
{
	os << bureu.getName()<< " - whos grade is "<< bureu.getGrade();
	return (os);
}

//Funciones
void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout<< "Bureaucrat "<< this->getName() << " signed form "<< form.getName()<<std::endl;
	}
	catch (std::exception & e)
	{
		std::cout<< "Bureaucrat "<< this->getName() << " cannot sign form "<< form.getName()<< " beacuse "<< e.what()<<std::endl;
	}
}	
