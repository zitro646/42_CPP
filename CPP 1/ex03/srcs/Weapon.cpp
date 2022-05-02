/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:16:52 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/05/02 09:43:09 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (void)
{
    return;
}

Weapon::Weapon(std::string str) :type(str)
{
    return;
}

Weapon::~Weapon (void)
{
    return;
}

const std::string Weapon::getType(void)
{
    return(this->type);
}

void Weapon::setType(std::string str)
{
    this->type = str;
}