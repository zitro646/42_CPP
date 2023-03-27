/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelangelortizdelburgo <miguelangelor    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:03:46 by miguelangel       #+#    #+#             */
/*   Updated: 2023/03/21 12:48:47 by miguelangel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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

bool input_on_list(std::vector<int> list, std::deque<int> list2)
{
	for (int x = 0; x < (int)list.size(); x++)
	{
		// std::cout << "X "<< x << std::endl;
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
			return 0;
	}
	return 1;
} 

std::vector<int> extract_data	( std::string str, char c)
{
	std::vector<int> 	aux;
	std::stringstream	test(str);
	std::string			segment;
	
	while (std::getline(test,segment,c))
	{
		if (isIntNumber(segment) && segment != "")
		{
			aux.push_back(atoi(segment.c_str()));
		}
	}
	return (aux);
}

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
	{
		aux += std::to_string(list[x]) + " ";
		// aux += " ";

	}
	return (aux);
}

int main (int argc, char **argv)
{
	std::string			origin;
	std::vector<int>	_test1;
	std::deque<int>	_test2;
	clock_t t1;
	clock_t t2;
	// double time;
	// bool optimal;

	t1 = clock();
	origin = get_whole_input(argc, argv);
	if (argc >= 2)
	{
		if (check_input(origin, ' '))
		{
			_test1 = extract_data(origin, ' ');
			for (int x = 0; x < (int)_test1.size();x++)
				_test2.push_back(_test1[x]);
			if (input_on_list(_test1,_test2))
			{
				std::cout << "Before :" << get_whole_vector(_test1) << std::endl;
				t1 = clock();
				_test1 = sort_vector(_test1);
				t2 = clock();
				std::sort(_test2.begin(),_test2.end());
				std::cout << "After :" << get_whole_vector(_test1) << std::endl;
				std::cout << "Time to process a range of "<< _test1.size() <<" elements with std::vector :  " << (static_cast<double>(t2 - t1) / CLOCKS_PER_SEC) * 1000 << " us" << std::endl;
				t1 = clock();
				_test2 = sort_deque(_test2);
				t2 = clock();
				std::cout << "Time to process a range of "<< _test2.size() <<" elements with std::deque :  " << (static_cast<double>(t2 - t1) / CLOCKS_PER_SEC) * 1000 << " us" << std::endl;
			}
			else
			{
				std::cout << "Error duplicates numbers found" << std::endl;
			}	
		}
		else 
		{
			std::cout << "Error found on input" << std::endl;
			return (0);
		}
	}
    return 0;
}