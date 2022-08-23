/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 17:56:03 by mortiz            #+#    #+#             */
/*   Updated: 2022/08/23 19:17:05 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include<iomanip>
#include<iostream>
# include <stack>

template<class T = int>
class Mutantstack : public std::stack<T>
{
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator const_reverse_iterator;
	
	public:
	//Canonic Class
	Mutantstack();
	Mutantstack(Mutantstack &spn);
	~Mutantstack();
	Mutantstack &operator=(const Mutantstack &spn);

};

//Output
template<typename T>
std::ostream& operator<<(std::ostream& os, const Mutantstack<T> &sp);

#endif