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
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const	std::string	name;
		bool				sign;
		const int			grade_sign;
		const int			grade_exec;
		void GradeTooHighException(void);
		void GradeTooLowException(void);
	public:
		Form(std::string str, int sig , int exe);
		~Form();
		std::string getName(void) const;
		int getGrade_Sign(void) const;
		int getGrade_Exec(void) const;
		bool get_signed(void) const;
		void beSigned(const Bureaucrat &bureu);
};
std::ostream &operator<<(std::ostream& os, const Form &bureu);
#endif