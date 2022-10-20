/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:18:03 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/10/20 17:00:14 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


int main()
{
	std::vector<int> prueba;
	for (int i = 1; i <= 10;i++)
		prueba.push_back(i);
	try
	{
		Span sp (11);
		sp.addmultipleNumbers(prueba.begin(),prueba.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception found -> " << e.what() << '\n';
	}
	std::cout << "_______________________________" << '\n';
	try
	{
		Span sp (4);
		sp.addNumber(-3);
		sp.addNumber(4);
		sp.addNumber(17);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception found -> " << e.what() << '\n';
	}
	std::cout << "_______________________________" << '\n';
	try
	{
		Span sp (5);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception found -> " << e.what() << '\n';
	}
	try
	{
		Span sp (3);
		sp.addNumber(7);
		sp.addNumber(7);
		sp.addNumber(7);
		sp.addNumber(7);
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception found -> " << e.what() << '\n';
	}

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