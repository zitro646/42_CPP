/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:02:00 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/05/02 09:37:57 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str) : name(str)
{
    std::cout<<this->name<<" im awake"<<std::endl;
    return;
}

Zombie::~Zombie (void)
{
    std::cout<<this->name<<" im banishing"<<std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout<<this->name<<" BraiiiiiiinnnzzzZ..."<<std::endl;
}