/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:12:36 by mortiz-d          #+#    #+#             */
/*   Updated: 2023/03/30 14:12:39 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char **argv)
{
	RPN *rpn = new RPN();
	
    if (argc == 2)
    {
		rpn->fillRPN(argv[1], ' ');
        try
		{
			std::cout << rpn->get_answer() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
    }
	else
    	std::cout<< "Error" << std::endl;
	return 0;
}