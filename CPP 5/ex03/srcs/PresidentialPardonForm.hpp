/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:15:36 by root              #+#    #+#             */
/*   Updated: 2022/05/01 00:20:42 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	private:
		void executeAction();
	public:
		PresidentialPardonForm(std::string str);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm & form);
		PresidentialPardonForm & operator=(const PresidentialPardonForm & form);
};
#endif