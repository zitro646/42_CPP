/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:51:18 by root              #+#    #+#             */
/*   Updated: 2022/04/26 13:40:09 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int nbr, std::string str)
{
    int i;
    Zombie* z = new Zombie[nbr];

    i = 0;
    while (i != nbr)
    {
        z[i].setZombiename(str + std::to_string(i + 1));
        i++;
    }
    return (z);   
}