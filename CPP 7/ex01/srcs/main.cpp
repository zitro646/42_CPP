/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:23:12 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/10/10 14:58:36 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include<iomanip>
#include<iostream>


int main( void ) 
{
	
	//Version Tester
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	::iter( tab, 5, print );
	::iter( tab2, 5, print );	

	
	// // Own version
	// int integer[5] = {1,2,3,4,5};
	// float floats[5] = {10.1f,20.1f,30.1f,40.1f,50.1f};
	// double doubles[5] = {0.01,1.01,2.01,3.01,4.01};
	// std::string strings[5] = {"Hola","que","tal","estas","?"};
	
	
	// try
	// {
	// 	std::cout << "Integer" << std::endl;
	// 	::iter( integer, 5 , &::show);
	// 	std::cout << "- - - add 1 - - - - -" << std::endl;
	// 	::iter( integer, 5 , &::add_one);
	// 	::iter( integer, 5 , &::show);
	// 	std::cout << "- - - rest 1 - - - - -" << std::endl;
	// 	::iter( integer, 5 , &::rest_one);
	// 	::iter( integer, 5 , &::show);
	// 	std::cout << "___________________________" << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << "Something happened"<< std::endl;
	// }
	
	// try
	// {
	// std::cout << "Float" << std::endl;
	// ::iter( floats, 5 , &::show);
	// std::cout << "- - - add 1 - - - - -" << std::endl;
	// ::iter( floats, 5 , &::add_one);
	// ::iter( floats, 5 , &::show);
	// std::cout << "- - - rest 1 - - - - -" << std::endl;
	// ::iter( floats, 5 , &::rest_one);
	// ::iter( floats, 5 , &::show);
	// std::cout << "___________________________" << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << "Something happened"<< std::endl;
	// }

	// try
	// {
	// std::cout << "Doubles" << std::endl;
	// ::iter( doubles, 5 , &::show);
	// std::cout << "- - - add 1 - - - - -" << std::endl;
	// ::iter( doubles, 5 , &::add_one);
	// ::iter( doubles, 5 , &::show);
	// std::cout << "- - - rest 1 - - - - -" << std::endl;
	// ::iter( doubles, 5 , &::rest_one);
	// ::iter( doubles, 5 , &::show);
	// std::cout << "___________________________" << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << "Something happened"<< std::endl;
	// }

	
	// try
	// {
	// std::cout << "strings" << std::endl;
	// ::iter( strings, 5 , &::show);
	// std::cout << "- - - add a - - - - -" << std::endl;
	// ::iter( strings, 5 , &::add_a_char);
	// ::iter( strings, 5 , &::show);
	// std::cout << "___________________________" << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << "Something happened"<< std::endl;
	// }
	

	return 0; 

}

