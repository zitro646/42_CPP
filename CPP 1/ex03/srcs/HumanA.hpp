/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:07:23 by root              #+#    #+#             */
/*   Updated: 2022/04/10 13:51:04 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
#define HUMAN_A

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
    private:
        Weapon      &weapon;
        std::string name;
    public:
        HumanA (void);
        HumanA (std::string name, Weapon &Weapon);
        ~HumanA (void);
        void attack(void);
};

#endif