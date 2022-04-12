/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:26:40 by root              #+#    #+#             */
/*   Updated: 2022/04/08 12:31:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie (std::string str);
        ~Zombie (void);
        void announce(void);
    private : 
        std::string name;
};

Zombie* newZombie(std::string str);
void ramdomChump(std::string str);


#endif