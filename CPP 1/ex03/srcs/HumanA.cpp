/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:31:04 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/05/02 09:42:28 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &w) : weapon(w), name(str) 
{
	return;
}

HumanA::~HumanA (void)
{
	return;
}

void HumanA::attack(void)
{
	std::cout<<this->name<<" attacks with his "<<this->weapon.getType()<<std::endl;
}