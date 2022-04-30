/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:47:57 by root              #+#    #+#             */
/*   Updated: 2022/05/01 00:21:20 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	private:
		void executeAction();
	public:
		ShrubberyCreationForm(std::string str);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm & form);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & form);
};
#endif