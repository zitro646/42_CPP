/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:56:38 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/06 13:55:03 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

#include<iostream>
#include <sstream>

void leaks(void)
{
	system("leaks -q test");
}

int main (void)
{
	//atexit(leaks);
	Data *origin = new Data("Jeff");
	Data *passby;
	uintptr_t dir_pointer;
	
	origin->salute();
	dir_pointer = serialize(origin);
	std::cout << "______________________________" << std::endl;
	std::cout << "Data Pointer Origin	: " << origin << std::endl;
	std::cout << "Data Serialized		: " << dir_pointer << std::endl;
	std::cout << "______________________________" << std::endl;
	passby = deserialize(dir_pointer);
	passby->salute();
	std::cout << "______________________________" << std::endl;
	std::cout << "Data Pointer Origin	: " << origin << std::endl;
	std::cout << "Data Pointer Passby	: " << passby << std::endl;
	std::cout << "______________________________" << std::endl;
	return (0);
}