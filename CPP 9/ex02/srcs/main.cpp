/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelangelortizdelburgo <miguelangelor    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:11:29 by mortiz-d          #+#    #+#             */
/*   Updated: 2023/04/10 22:00:39 by miguelangel      ###   ########.fr       */
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

	origin = get_input(argc, argv);
	if (argc >= 2)
	{
		if (check_input(origin, ' '))
		{
			_test1 = extract_data<std::vector<int> >(origin, ' ');
			_test2 = extract_data<std::deque<int> >(origin, ' ');
			if (input_on_list(_test1,_test2))
			{
				std::cout << "Before :" << show_array(_test1) << std::endl;
				t1 = clock();
				_test1 = sort(_test1);
				t2 = clock();
				std::cout << "After :" << show_array(_test1) << std::endl;
				std::cout << "Time to process a range of "<< _test1.size() <<" elements with std::vector :  " << (static_cast<double>(t2 - t1)) << " µs - "<< (static_cast<double>(t2 - t1)/CLOCKS_PER_SEC)<< " s" << std::endl;
				t1 = clock();
				_test2 = sort(_test2);
				t2 = clock();
				std::cout << "Time to process a range of "<< _test2.size() <<" elements with std::deque :  " << (static_cast<double>(t2 - t1)) << " µs - "<< (static_cast<double>(t2 - t1)/CLOCKS_PER_SEC)<< " s" << std::endl;
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