/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:50:12 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/07 16:42:37 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include<iostream>
#include<iomanip>
#include<string>

class ClapTrap
{
	private:
		std::string name;
		int			hp;
		int			energy_points;
		int			atack_dmg;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap & clap);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap const & clap);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		void set_hp(int amount);
		void set_energy(int amount);
		void set_atack(int amount);
		int get_hp();
		int get_energy();
		int get_atack();
};

#endif
