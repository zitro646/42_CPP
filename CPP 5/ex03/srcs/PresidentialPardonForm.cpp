/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:16:24 by root              #+#    #+#             */
/*   Updated: 2022/05/01 00:20:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string str) : Form(str, 25, 5)
{
    return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & f) : Form(f.getName(), f.getGrade_Sign(), f.getGrade_Exec())
{
    return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & form)
{
    if (this == &form)
        return *this;
    return *this;
}

void PresidentialPardonForm::executeAction(void)
{
    std::cout << "Target "<<this->getName() << " has been pardoned by Zafod Beeblebrox." <<std::endl;
}