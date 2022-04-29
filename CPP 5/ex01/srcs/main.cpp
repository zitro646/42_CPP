/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:56:38 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/29 16:07:50 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main (void)
{ 
	try
	{
		Bureaucrat	bureu("Hermes", 48);
		Form		form("Receipt", 35, 35);
		std::cout<< bureu <<std::endl;
		std::cout<< form <<std::endl;
		bureu.signForm(form);
		std::cout<< form <<std::endl;
	}
	catch (std::exception & e)
	{
		std::cout<< "I somehow have failed, probably it was beacuse of those pesky grades"<<std::endl;
	}
	std::cout<<"- - - - - - - - - - - - - - - - - - - -"<<std::endl;
	try
	{
		Bureaucrat	bureu("Herpes", 36);
		Form		form("Reset Server", 36, 36);
		std::cout<< bureu <<std::endl;
		std::cout<< form <<std::endl;
		bureu.signForm(form);
		std::cout<< form <<std::endl;
	}
	catch (std::exception & e)
	{
		std::cout<< "I somehow have failed, probably it was beacuse of those pesky grades"<<std::endl;
	}
	return (0);
}