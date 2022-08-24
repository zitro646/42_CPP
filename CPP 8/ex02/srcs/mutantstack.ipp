/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.ipp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 17:55:33 by mortiz            #+#    #+#             */
/*   Updated: 2022/08/24 12:42:33 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

// typedef typename std::stack<T>::container_type::iterator iterator;
// typedef typename std::stack<T>::container_type::const_iterator const_iterator;
// typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
// typedef typename std::stack<T>::container_type::reverse_iterator const_reverse_iterator;


template<typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
	return;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	return;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack & mut)
{
	this = &mut;
	return;
}

template<typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> &mutant)
{
	 if (this == &mutant)
            return (*this);
    std::stack<T>::operator=(mutant);
    return (*this);
}