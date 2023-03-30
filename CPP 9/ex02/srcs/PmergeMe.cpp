/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:11:46 by mortiz-d          #+#    #+#             */
/*   Updated: 2023/03/30 14:58:49 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

std::string get_whole_input(int argc, char **argv)
{
	std::string	aux;

	aux = "";
	for (int x = 1;x != argc; x++)
		aux += std::string(argv[x]) + " ";
	return (aux);
}

std::string get_whole_vector(std::vector <int> list)
{
	std::string	aux = "";

	for (int x = 0; x < (int)list.size();x++)
		aux += std::to_string(list[x]) + " ";
	return (aux);
}

std::vector<int> extract_data	( std::string str, char c)
{
	std::vector<int> 	aux;
	std::stringstream	test(str);
	std::string			segment;
	
	while (std::getline(test,segment,c))
		if (isIntNumber(segment) && segment != "")
			aux.push_back(atoi(segment.c_str()));
	return (aux);
}

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

std::vector<int> sort_vector( std::vector<int> list )
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

std::deque<int> sort_deque( std::deque<int> list )
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