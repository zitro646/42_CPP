/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:18:03 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/08/23 19:00:45 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


int main()
{
	Span sp (5);
	sp.addNumber(5);
	sp.addNumber(17);
	sp.addNumber(7);
	sp.addNumber(11);
	sp.addNumber(1);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

/*
int main (void)
{
	Span x(4);
	
	x.addNumber(-20);
	x.addNumber(15);
	x.addNumber(50);
	x.addNumber(25);
	try
	{
		x.addNumber(24);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << x << std::endl;
	
	std::cout << "Shortest value is -> " << x.shortestSpan() << std::endl;
	std::cout << "Longest value is -> " << x.longestSpan() << std::endl;

	return 1;
}*/