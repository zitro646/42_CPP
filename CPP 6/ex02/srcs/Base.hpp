/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:43:07 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/08/23 16:14:39 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_H
#define BASE_H

#include<iomanip>
#include<iostream>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

class Base
{	
	public:
		Base();
		Base(const Base & base);
		virtual ~Base();
		Base operator=(const Base & caster);
		virtual void info(void) const;
};

std::ostream &operator<<(std::ostream& os, const Base &base);

#endif