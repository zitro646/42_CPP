/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:41:12 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/05 01:41:49 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_H
#define CASTER_H

#define ERROR_TYPE 0
#define CHAR_TYPE 1
#define INT_TYPE 2
#define FLOAT_TYPE 3
#define DOUBLE_TYPE 4


#include<iomanip>
#include<iostream>
#include <limits>
#include <wchar.h>
#include <math.h> 

class Serializer
{
	public:
		Serializer(std::string str);
		~Serializer();
		void show_result(void);
	private:
		typedef void (Serializer::*funptr) (void);
		std::string str;
		int			type_input;

		int	identify_type(std::string str);
		int double_inff(void);
		int float_inff(void);
		
		void displayChar(void);
		void displayInteger(void);
		void displayFloat(void);
		void displayDouble(void);
};

#endif