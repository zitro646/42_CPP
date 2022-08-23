/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:18:12 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/08/23 18:21:50 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iomanip>
#include<iostream>
#include <vector>

#ifndef SEARCH_ERR
#define SEARCH_ERR -2147483648
#endif

template<typename T>
int easyfind (T value1, int value2)
{
	typename T::iterator iter;

	iter = std::find(value1.begin(), value1.end(), value2);
	if (value2 == *iter)
		return *iter;
	return SEARCH_ERR;
}