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


# include "mutantstack.hpp"
# include "mutantstack.ipp"

int main()
{
	//std::stack<int> test;
	Mutantstack<int> test;
	Mutantstack<int> test2;



	test.push(1);
	test.push(12);
	test.push(13);
	test.push(14);

	std::cout << test.top() << std::endl;
	test.pop();test.pop();
	test2 = test;
	std::cout << test2.top() << std::endl;
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