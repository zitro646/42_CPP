/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:43:30 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/07 12:53:22 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iomanip>
#include<iostream>

template<typename T>
T min(T n1, T n2)
{
	if ( n1 < n2)
		return n1;
	return n2;
}

template<typename T>
T max(T n1, T n2)
{
	if ( n1 > n2)
		return n1;
	return n2;
}

template<typename T>
void swap(T &n1, T &n2)
{
	T aux;

	aux = n1;
	n1 = n2;
	n2 = aux;
}