/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelangelortizdelburgo <miguelangelor    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:11:37 by mortiz-d          #+#    #+#             */
/*   Updated: 2023/04/10 22:11:06 by miguelangel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <deque>
#include <forward_list>
#include <vector>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <cmath>
#include <chrono>
#include <ctime>

//Check strings
std::string 		get_input		(  int argc, char **argv );

//Check data integrity
bool 				input_on_list		( std::vector<int> list, std::deque<int> list2 );
bool 				check_input			( std::string str, char c );
bool 				isIntNumber			( std::string str );

//show list
template<typename T>
std::string show_array	( T list )
{
	std::string	aux = "";

	for (int x = 0; x < (int)list.size();x++)
		aux += std::to_string(list[x]) + " ";
	return (aux);
}

//Template to extract data
template<typename L>
L extract_data	( std::string str, char c)
{
	L                   aux;
	std::stringstream	test(str);
	std::string			segment;
	
	while (std::getline(test,segment,c))
		if (isIntNumber(segment) && segment != "")
			aux.push_back(atoi(segment.c_str()));
	return (aux);
}

//Template to sort
template<typename T>
T sort(T list)
{	
	int		aux;
	
	for (int x = 0;x < (int)list.size() - 1; x++)
	{
		if (list[x] > list[x + 1])
		{
			aux = list[x];
			list[x] = list[x + 1];
			list[x + 1] = aux;
			x = -1;
		}
	}
	return (list);	
}