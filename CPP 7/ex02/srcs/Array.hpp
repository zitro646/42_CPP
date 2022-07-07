/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:01:52 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/07 16:35:45 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<class T>
class Array
{
	private:
		Array();
		Array(unsigned int size);
		Array(Array const &array);
		~Array();

		Array& operator= (Array const & data);
		T &operator[](int i);
		//Allocar memoria usando new[]

	public:
};