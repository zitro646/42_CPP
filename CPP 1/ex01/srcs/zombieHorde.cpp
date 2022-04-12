/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:51:18 by root              #+#    #+#             */
/*   Updated: 2022/04/08 13:16:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int nbr, std::string str)
{
    int i;
    Zombie* z = new Zombie[nbr];

    i = 0;
    while (i != nbr)
        z[i++].setZombiename(str);
    return (z);   
}