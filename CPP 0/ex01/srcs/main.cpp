/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:36:10 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/11 17:33:42 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//clang++ main.cpp   
#include"general.hpp"

int main (void)
{
	PhoneBook	libro;
	int			i;
	int			t_max;
	string		input;
	
	i = 0;
	t_max = 0;
	while (input != "EXIT")
	{
		std::cout<<"Writte something"<<std::endl;
		input = get_input();
		if (input == "ADD")
		{
			if (i == 8)
				i = 0;
			if (t_max != 8)
				t_max++;
			libro.addContact(i++);
		}
		else if (input == "SEARCH")
			libro.searchContact(t_max);
		else if (input == "EXIT")
			std::cout<<"Clossing ..."<<std::endl;
		else
			std::cout<<"Options Aviable are"<<std::endl<<"ADD \\ SEARCH \\ EXIT"<<std::endl;
	}
	return (0);
}