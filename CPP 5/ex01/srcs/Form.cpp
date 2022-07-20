/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:37:55 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 18:23:39 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string str, int sig , int exe) : name(str), sign(false), grade_sign(sig), grade_exec(exe)
{
	if (sig > 150 || exe > 150)
		throw Form::GradeTooLowException();
	if (sig < 1 || exe < 1)
		throw Form::GradeTooHighException();
	return ;
}

Form::~Form()
{
	return;
}

std::ostream &operator<<(std::ostream& os, const Form &form)
{
	os << "Form : "<<form.getName()<< " requires a signing grade of "<< form.getGrade_Sign();
	os << " and a execution grade of "<<form.getGrade_Exec();
	if (form.get_signed() == true)
		os << " this form IS SIGNED";
	else
		os << " this form IS NOT SIGNED";
	return (os);
}


Form::Form(const Form & form) : name(form.getName()), sign(form.get_signed()), grade_sign(form.getGrade_Sign()) , grade_exec(form.getGrade_Exec())
{
	return;
}

Form & Form::operator=(const Form & form)
{
	if (this == &form)
		return (*this);
	return (*this);
}

//Funciones que lanzan las excepciones
const char* Form::GradeTooHighException::what() const throw()
{
	return ( "Grade is to high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ( "Grade is to low");
}

//Getters
std::string Form::getName(void) const
{
	return (this->name);
}

int Form::getGrade_Sign(void) const
{
	return (this->grade_sign);
}

int Form::getGrade_Exec(void) const
{
	return (this->grade_exec);
}

bool Form::get_signed(void) const
{
	return (this->sign);
}

//Functions
void Form::beSigned(const Bureaucrat &bureu)
{
	if (getGrade_Sign() < bureu.getGrade())
		throw Form::GradeTooLowException();
	else
		this->sign = true;
}