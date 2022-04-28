/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:41:34 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/28 13:36:56 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain created"<<std::endl;
	for (int i = 0;i < 100 ; i++)
		this->ideas[i] = "";
	return;
}

Brain::~Brain()
{
	std::cout<<"Brain destroyed"<<std::endl;
	return;
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
}

Brain& Brain::operator=(Brain const & brain)
{
	int i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = brain.ideas[i];
		i++;
	}
	return (*this);
}

std::string Brain::getIdea(int index)
{
	return(this->ideas[index]);
}