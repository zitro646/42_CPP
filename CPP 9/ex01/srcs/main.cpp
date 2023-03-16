/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelangelortizdelburgo <miguelangelor    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:48:27 by miguelangel       #+#    #+#             */
/*   Updated: 2023/03/15 23:30:23 by miguelangel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char **argv)
{
	RPN *rpn = new RPN();
	(void)argc;
    if (argc > 1)
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
    
	// std::cout<< "input is mandatory : "<< (std::string)(argv) << std::endl;
    
	
	return 0;
}