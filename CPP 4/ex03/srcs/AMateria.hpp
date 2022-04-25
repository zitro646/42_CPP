/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:46:34 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/25 16:59:30 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H


#include <iomanip>

class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(std::string const & str);
	~AMateria();
	AMateria &operator=(const AMateria &amateria);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	//virtual void use(ICharacter& target);
};


#endif