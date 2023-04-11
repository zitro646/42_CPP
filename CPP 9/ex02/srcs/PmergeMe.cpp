/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelangelortizdelburgo <miguelangelor    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:11:46 by mortiz-d          #+#    #+#             */
/*   Updated: 2023/04/10 22:10:42 by miguelangel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

std::string get_input(int argc, char **argv)
{
	std::string	aux;

	aux = "";
	for (int x = 1;x != argc; x++)
		aux += std::string(argv[x]) + " ";
	return (aux);
}

// std::string show_array(std::vector <int> list)
// {
// 	std::string	aux = "";

// 	for (int x = 0; x < (int)list.size();x++)
// 		aux += std::to_string(list[x]) + " ";
// 	return (aux);
// }

bool input_on_list(std::vector<int> list, std::deque<int> list2)
{
	for (int x = 0; x < (int)list.size(); x++)
	{
		for (int y = 0; y < (int)list2.size(); y++)
			if (list[x] == list2[y] && x != y)
				return 0;
	}
	return 1;
}

bool isIntNumber(std::string str)
{
	char * e;
	double		x;
	
	x = strtod(str.c_str(),&e);
	if (*e != '\0')
		return 0;
	if ( x < std::numeric_limits<int>::lowest() || \
	x > std::numeric_limits<int>::max())
  		return 0;
	if (fmod(x, 1.0) != 0)
        return 0;
	return 1;
}

bool check_input(std::string str, char c)
{
	std::stringstream 		test(str);
	std::string				segment;

	while (std::getline(test,segment,c))
	{
		if (!isIntNumber(segment))
		{
			std::cout <<" found "<< segment <<" as string "<< std::endl;
			return 0;
		}
	}
	return 1;
}