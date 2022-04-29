/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:56:38 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/29 13:19:50 by mortiz-d         ###   ########.fr       */
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
		std::cout<< "I somehow have failed, probably it was beacuse of those pesky grades"<<std::endl;
	}
	std::cout<< "- - - - - - - - - - - - - - - - -"<<std::endl;
	try
	{
		Bureaucrat bureu("Juan",150);

		std::cout<< bureu <<std::endl;
		for (int i = 150; i > 1; i--)
			bureu.increaseGrade();
		std::cout<< bureu <<std::endl;
		
	}
	catch (std::exception & e)
	{
		std::cout<< "I somehow have failed, probably it was beacuse of those pesky grades"<<std::endl;
	}
	std::cout<< "- - - - - - - - - - - - - - - - -"<<std::endl;
	try
	{
		Bureaucrat bureu("Pedro",150);

		std::cout<< bureu <<std::endl;
		for (int i = 1; i < 150; i++)
			bureu.increaseGrade();
		std::cout<< bureu <<std::endl;
		
	}
	catch (std::exception & e)
	{
		std::cout<< "I somehow have failed, probably it was beacuse of those pesky grades"<<std::endl;
	}
	return (0);
}