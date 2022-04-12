/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:06:38 by root              #+#    #+#             */
/*   Updated: 2022/04/08 12:32:18 by root             ###   ########.fr       */
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