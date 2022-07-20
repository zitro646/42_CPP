/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:56:26 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 18:20:24 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include<iomanip>
#include<iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	public:
		Bureaucrat(std::string str, int i);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat & bureu);
		Bureaucrat operator=(const Bureaucrat & bureu);
		std::string getName(void) const;
		int getGrade(void) const;
		void increaseGrade(void);
		void decreaseGrade(void);
		void signForm(Form &form);

};
std::ostream &operator<<(std::ostream& os, const Bureaucrat &bureu);
#endif