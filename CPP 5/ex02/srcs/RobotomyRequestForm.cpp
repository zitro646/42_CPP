/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:59:17 by root              #+#    #+#             */
/*   Updated: 2022/04/30 23:12:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string str) : Form(str, 72, 45)
{
    return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & f) : Form(f.getName(), f.getGrade_Sign(), f.getGrade_Exec())
{
    return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & form)
{
    if (this == &form)
        return *this;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (getGrade_Exec() < executor.getGrade())
		GradeTooLowException();
	if (this->get_signed() == false)
		NoSignException();
    this->executeAction();
}

void RobotomyRequestForm::executeAction(void)
{
    int n_generated;

   	srand (time(NULL));
    n_generated = rand() % 100;
    if (n_generated < 50)
        std::cout << "Target "<<this->getName() << " has been robotomized successfully" <<std::endl;
    else
       std::cout << "Target "<<this->getName() <<  " failed to be robotimized" <<std::endl;
}