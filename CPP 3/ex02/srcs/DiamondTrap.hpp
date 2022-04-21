/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:21:05 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/21 16:26:27 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ClapTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string str);
		~DiamondTrap();
		DiamondTrap& operator=(DiamondTrap const & clap);
};

#endif