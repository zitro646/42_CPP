/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:11:29 by mortiz-d          #+#    #+#             */
/*   Updated: 2023/03/30 14:32:14 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"



int main (int argc, char **argv)
{
	std::string			origin;
	std::vector<int>	_test1;
	std::deque<int>		_test2;
	clock_t t1;
	clock_t t2;

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
				std::cout << "After :" << get_whole_vector(_test1) << std::endl;
				std::cout << "Time to process a range of "<< _test1.size() <<" elements with std::vector :  " << (static_cast<double>(t2 - t1)) << " µs" << std::endl;
				t1 = clock();
				_test2 = sort_deque(_test2);
				t2 = clock();
				std::cout << "Time to process a range of "<< _test2.size() <<" elements with std::deque :  " << (static_cast<double>(t2 - t1)) << " µs" << std::endl;
			}
			else
				std::cout << "Error duplicates numbers found" << std::endl;
			
		}
		else 
		{
			std::cout << "Error found on input" << std::endl;
			return (0);
		}
	}
    return 0;
}