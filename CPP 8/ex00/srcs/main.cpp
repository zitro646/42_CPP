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
	
	for (int i=-5;i<25;i++)
	{
		try
		{
			std::cout << "search -> " << ::easyfind(test , i)<< std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Exception found -> " << e.what() << '\n';
		}
	}	

	return 1;
}