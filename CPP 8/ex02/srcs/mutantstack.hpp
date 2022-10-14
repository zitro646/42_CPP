/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 17:56:03 by mortiz            #+#    #+#             */
/*   Updated: 2022/10/14 15:27:32 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include<iomanip>
#include<iostream>
# include <stack>
# include <vector>

template<class T >
class MutantStack : public std::stack<T>
{
	public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator r_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator const_riterator;
	
	
	//Canonic Class
	MutantStack();
	MutantStack(MutantStack &spn);
	~MutantStack();
	MutantStack &operator=(const MutantStack &spn);

	iterator begin(void) { return this->c.begin(); }
	iterator end(void) { return this->c.end(); }

	const_iterator begin(void) const { return this->c.begin(); }
	const_iterator end(void) const { return this->c.end(); }

	r_iterator rbegin(void) { return this->c.rbegin(); }
	r_iterator rend(void) { return this->c.rend(); }

	const_riterator rbegin(void) const { return this->c.rbegin(); }
	const_riterator rend(void) const { return this->c.rend(); }

};

//Output
template<typename T>
std::ostream& operator<<(std::ostream& os, const MutantStack<T> &sp);

#endif