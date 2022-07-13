/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:18:03 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/13 17:05:03 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main (void)
{
	Span x(4);
	
	x.addNumber(4);
	x.addNumber(99);
	x.addNumber(42);
	x.addNumber(53);
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

	return 1;
}