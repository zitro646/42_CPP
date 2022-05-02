/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:31:04 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/05/02 09:42:45 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) :  weapon(NULL) , name(str)
{
	return;
}

HumanB::~HumanB (void)
{
	return;
}

void HumanB::attack(void)
{
	if (weapon != NULL)
		std::cout<<this->name<<" attacks with his "<<this->weapon->getType()<<std::endl;
	else
		std::cout<<this->name<<" tries to puch you"<<std::endl;
}

void    HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
}