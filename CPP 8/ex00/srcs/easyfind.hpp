/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:18:12 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/13 13:37:13 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iomanip>
#include<iostream>

template<typename T>
int easyfind (T value1, int value2)
{
	
	try
	{
		for (int x = 0;value1[x] != '\0';x++)
			if (value1[x] == value2)
				return x;
		return -1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return -2;
}