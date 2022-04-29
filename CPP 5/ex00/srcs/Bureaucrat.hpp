/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:56:26 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/29 12:47:03 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include<iomanip>
#include<iostream>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
		void GradeTooHighException(void);
		void GradeTooLowException(void);
	public:
		Bureaucrat(std::string str, int i);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat & bureu);
		Bureaucrat operator=(const Bureaucrat & bureu);
		std::string getName(void) const;
		int getGrade(void) const;
		void increaseGrade(void);
		void decreaseGrade(void);

};

std::ostream &operator<<(std::ostream& os, const Bureaucrat &bureu);
#endif