/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:21:06 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/29 15:56:25 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include<iomanip>
#include<iostream>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const	std::string	name;
		bool				sign;
		const int			grade_sign;
		const int			grade_exec;
	protected:
		virtual void GradeTooHighException(void);
		virtual void GradeTooLowException(void);
		virtual void NoSignException(void);
		virtual void executeAction();
	public:
		Form(std::string str, int sig , int exe);
		virtual ~Form();
		Form(const Form & form);
		Form & operator=(const Form & form);
		std::string getName(void) const;
		int getGrade_Sign(void) const;
		int getGrade_Exec(void) const;
		bool get_signed(void) const;
		void beSigned(const Bureaucrat &bureu);
		virtual void execute(Bureaucrat const & executor);
};
std::ostream &operator<<(std::ostream& os, const Form &bureu);
#endif