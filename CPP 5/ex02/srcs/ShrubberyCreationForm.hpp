/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz <mortiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:47:57 by root              #+#    #+#             */
/*   Updated: 2022/07/08 17:15:23 by mortiz           ###   ########.fr       */
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
		void execute(Bureaucrat const & executor);
};
#endif