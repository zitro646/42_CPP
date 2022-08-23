/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:18:03 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/08/23 18:23:11 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main (void)
{
	std::vector<int> test;
	
	for (int i=0;i<20;i++)
		test.push_back(i);
	
	std::cout << "search 2 fail -> " << ::easyfind(test , 98)<< std::endl;
	std::cout << "search -> " << ::easyfind(test , 5)<< std::endl;
	

	return 1;
}