/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:58:23 by root              #+#    #+#             */
/*   Updated: 2022/04/30 22:45:25 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"
#include <stdlib.h>
#include <time.h>

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	private:
		void executeAction();
	public:
		RobotomyRequestForm(std::string str);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm & form);
		RobotomyRequestForm & operator=(const RobotomyRequestForm & form);
		void execute(Bureaucrat const & executor);
};
#endif