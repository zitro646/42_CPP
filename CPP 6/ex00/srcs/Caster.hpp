/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:22:00 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/05 01:42:04 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_H
#define CASTER_H

#define ERROR_TYPE 0
#define CHAR_TYPE 1
#define INT_TYPE 2
#define FLOAT_TYPE 3
#define DOUBLE_TYPE 4


#include <iomanip>
#include <iostream>
#include <limits>
#include <wchar.h>
#include <math.h>


class Caster
{
	public:
		Caster(std::string str);
		Caster(const Caster & cast);
		~Caster();
		Caster operator=(const Caster & caster);
		void show_result(void);
	private:
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