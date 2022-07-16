/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz <mortiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 17:56:03 by mortiz            #+#    #+#             */
/*   Updated: 2022/07/16 11:41:03 by mortiz           ###   ########.fr       */
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