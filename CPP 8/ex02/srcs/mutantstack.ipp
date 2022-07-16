/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.ipp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz <mortiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 17:55:33 by mortiz            #+#    #+#             */
/*   Updated: 2022/07/16 00:14:14 by mortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<typename T>
//Mutantstack<T>::Mutantstack(void) : std::stack<T>
Mutantstack<T>::Mutantstack(void) : std::stack<T>()
{
	return;
}

template<typename T>
Mutantstack<T>::~Mutantstack()
{
	return;
}

template<typename T>
Mutantstack<T>::Mutantstack(Mutantstack & mut)
{
	this = &mut;
	return;
}

template<typename T>
Mutantstack<T> & Mutantstack<T>::operator=(const Mutantstack<T> &mutant)
{
	 if (this == &mutant)
            return (*this);
    std::stack<T>::operator=(mutant);
    return (*this);
}