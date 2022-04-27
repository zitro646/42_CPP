/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:25:59 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/27 13:33:43 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE
# define MATERIA_SOURCE

#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource: public IMateriaSource
{
       private:
              int inv_tam;
              AMateria *inventory[4];
       public:
              MateriaSource();
              MateriaSource(const MateriaSource &source);
              ~MateriaSource();
              MateriaSource operator=(const MateriaSource &source);
              void learnMateria(AMateria*);
              AMateria* createMateria(std::string const & type);
};

#endif