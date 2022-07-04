/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:56:38 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/05 00:22:38 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

#include<iostream>
#include <sstream>

void leaks(void)
{
	system("leaks -q test");
}

int main (int argc, char **argv)
{
	std::string str;

	atexit(leaks);
	if (argc == 2)
	{
		str = argv[1];
		Caster *test = new Caster(str);
		test->show_result();
	}
	else
		std::cout<< "Wrong input "<<argc <<std::endl;
	return (0);
}