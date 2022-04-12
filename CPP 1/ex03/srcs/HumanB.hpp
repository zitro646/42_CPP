/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:07:23 by root              #+#    #+#             */
/*   Updated: 2022/04/10 13:59:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
    private:
        Weapon*		weapon;
        std::string name;
    public:
        HumanB(void);
        HumanB(std::string name);
        ~HumanB(void);
        void    setWeapon(Weapon &w);
        void    attack(void);
};

#endif