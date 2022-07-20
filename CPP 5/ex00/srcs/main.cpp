/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:56:38 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 17:46:59 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int main (void)
{ 
	try
	{
		Bureaucrat bureu("Hermes",36);

		std::cout<< bureu <<std::endl;
		bureu.decreaseGrade();
		bureu.decreaseGrade();
		std::cout<< bureu <<std::endl;
		bureu.increaseGrade();
		bureu.increaseGrade();
		std::cout<< bureu <<std::endl;
		
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}
	std::cout<< "- - - - - - - - - - - - - - - - -"<<std::endl;
	std::cout<< "- - - Going to fail  - - - - - -"<<std::endl;
	std::cout<< "- - - - - - - - - - - - - - - - -"<<std::endl;
	try
	{
		Bureaucrat bureu("Juan",150);
		bureu.decreaseGrade();
		
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}
	std::cout<< "- - - - - - - - - - - - - - - - -"<<std::endl;
	try
	{
		Bureaucrat bureu("Pedro",1);
		bureu.increaseGrade();
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}
	return (0);
}