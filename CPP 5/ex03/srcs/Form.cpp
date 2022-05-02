/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:37:55 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/29 16:05:27 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string str, int sig , int exe) : name(str), sign(false), grade_sign(sig), grade_exec(exe)
{
	if (sig > 150 || exe > 150)
		GradeTooLowException();
	if (sig < 1 || exe < 1)
		GradeTooHighException();
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
void Form::GradeTooHighException(void)
{
	throw std::invalid_argument("grade is to high");
}

void Form::GradeTooLowException(void)
{
	throw std::invalid_argument("grade is to low");
}

void Form::NoSignException(void)
{
	throw std::invalid_argument("form isn't signed");
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
		GradeTooLowException();
	else
		this->sign = true;
}

void Form::execute(Bureaucrat const & executor)
{
	if (getGrade_Exec() < executor.getGrade())
		GradeTooLowException();
	if (this->get_signed() == false)
		NoSignException();
	this->executeAction();
}