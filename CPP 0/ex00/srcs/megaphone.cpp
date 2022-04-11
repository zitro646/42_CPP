/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:45:22 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/11 17:32:22 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//clang++ megaphone.cpp  

#include<iostream>

void	speak(char **argv, int word)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i + 1 < word)
	{
		j = 0;
		while (argv[i + 1][j] != '\0')
			std::cout<<char(toupper(argv[i + 1][j++]));
		if (i < word)
			std::cout<<" ";
		i++;
	}
	std::cout<<std::endl;
}

int main (int argc, char **argv)
{
	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else
		speak(argv, argc);
	return 0;
}