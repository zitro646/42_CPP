/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.ipp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 17:55:33 by mortiz            #+#    #+#             */
/*   Updated: 2022/08/23 19:11:30 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<typename T>
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