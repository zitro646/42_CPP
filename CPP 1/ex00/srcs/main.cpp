/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:06:38 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/05/02 09:36:49 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//clang++ main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

int main(void)
{
    Zombie* z = new Zombie("Pedro");
    Zombie* z2 = newZombie("Juan");

    ramdomChump("Paco");
    z->announce();
    delete(z2);
    delete(z);
}