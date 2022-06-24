/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:22:00 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/06/24 18:49:55 by mortiz-d         ###   ########.fr       */
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

class Caster
{
	public:
		Caster(std::string str);
		~Caster();
		void show_result(void);
	private:
		typedef void (Caster::*funptr) (void);
		std::string str;
		int			type_input;
		char		n_char;
		int			n_int;
		float		n_float;
		double		n_double;

		int	identify_type(std::string str);
		void turnfromChar(void);
		void turnfromInt_Flo_Dou(void);

		void displayChar(void);
		void displayInteger(void);
		void displayFloat(void);
		void displayDouble(void);
		void displayError(void);
};

#endif