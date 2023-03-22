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
#include "PmergeMe.ipp"

int main (int argc, char **argv)
{
	PmergeMe <std::vector<int> >	_test;
	PmergeMe <std::deque<int> >		_test2;

	if (argc == 2)
	{
		if (_test.check_input(argv[1], ' '))
		{
			_test.extract_data(argv[1], ' ');
			_test2.extract_data(argv[1], ' ');
		}
		else 
		{
			std::cout << "Error found on input" << std::endl;
			return (0);
		}
		std::cout << "Before -> "<< _test << std::endl;
		_test.sort_data();
		_test2.sort_data();
		std::cout << "After -> "<< _test << std::endl;
		std::cout << "Time to process a range of " << _test.get_data().size() << " elements with std::vector " << _test.get_duration() << " µs\n";
		std::cout << "Time to process a range of " << _test2.get_data().size() << " elements with std::deque " << _test.get_duration() << " µs\n";

	}
	
	// std::cout << "List 1 -> ";
	// for (iterator it = _container_1.begin(); it != _container_1.end(); it++)
	// 	std::cout << *it << " ";
	// std::cout << std::endl;
	// std::sort (_container_1.begin(), _container_1.end());
	// std::cout << "List 2 -> ";
	// for (iterator it = _container_1.begin(); it != _container_1.end(); it++)
	// 	std::cout << *it << " " ;
	// std::cout << std::endl;






	
    // std::set <PmergeMe> ord_v;
    // ord_v.ordenar(v);
    // for (auto x : v) {
    //     std::cout << x << " ";
    // }
    // std::cout << std::endl;
    
    // std::list<int> l = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    // Ordenamiento<std::list<int>> ord_l;
    // ord_l.ordenar(l);
    // std::cout << std::endl;
    
    return 0;





}