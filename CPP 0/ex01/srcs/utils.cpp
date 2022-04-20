/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:06:56 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/20 16:15:52 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"general.hpp"

std::string get_input(void)
{
	std::string	input;
	getline(std::cin, input);
	if (input.empty())
		return ("");
	return (input);
}

int	valid_number(int current_tam, std::string str)
{
	int i;
	
	if (str.length() > 2 || str.length() == 0)
		return (0);
	if (!isdigit(str[0]))
		return (0);
	i = ((int)str[0]) - 48;
	if (i >= 0 && i <= current_tam)
		return (1);
	return (0);
}