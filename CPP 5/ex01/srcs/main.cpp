/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:56:38 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 18:33:16 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main (void)
{ 
	Bureaucrat	bureu("Hermes", 48);
	std::cout<<"- - - - - - - - - - - - - - - - - - - -"<<std::endl;
	try
	{
		Form	form("Receipt", 35, 35);
		std::cout<< form <<std::endl;
		bureu.signForm(form);
		std::cout<< form <<std::endl;
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}
	std::cout<<"- - - - - - - - - - - - - - - - - - - -"<<std::endl;
	try
	{
		Form	form("Reset Server", 56, 56);
		std::cout<< form <<std::endl;
		bureu.signForm(form);
		std::cout<< form <<std::endl;
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}
	std::cout<<"- - - - - - - - - - - - - - - - - - - -"<<std::endl;
	std::cout<<"- - - - - -Error on Forms - - - - - - -"<<std::endl;
	std::cout<<"- - - - - - - - - - - - - - - - - - - -"<<std::endl;
	try
	{
		Form	form("Born to Fail", -1, -1);
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}

	try
	{
		Form	form("Born to Fail 'The sequel'", 255, 255);
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}
	return (0);
}