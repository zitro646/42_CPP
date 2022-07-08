/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:43:07 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/06 15:45:40 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_H
#define BASE_H

#include<iomanip>
#include<iostream>

class Base
{	
	public:
		Base();
		Base(const Base & base);
		virtual ~Base();
		Base operator=(const Base & caster);
		virtual void info(void) const;
};

#endif