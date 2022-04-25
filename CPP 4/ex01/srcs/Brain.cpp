/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:41:34 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/25 14:40:08 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain created"<<std::endl; 
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