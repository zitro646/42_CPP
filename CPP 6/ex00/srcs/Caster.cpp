/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:57 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/06/24 19:20:05 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"


Caster::Caster(std::string n_str): str(n_str), type_input(ERROR_TYPE), n_char(0), n_int(0), n_float(0), n_double(0)
{
	type_input = identify_type(n_str);
	Caster::funptr function[2] = {&Caster::turnfromChar , &Caster::turnfromInt_Flo_Dou};
	if (type_input == CHAR_TYPE)
		(this->*(function[0]))();
	else if (type_input != ERROR_TYPE)
		(this->*(function[1]))();
	
	std::cout << "Casteo -> " << type_input << std::endl;
	return;
}

Caster::~Caster()
{
	return;
}

int	Caster::identify_type(std::string str)
{
	int result_type;
	int i;

	i = 0;
	result_type = ERROR_TYPE;
	if (str.length() == 1 && isascii(str[0]) == 1 && isdigit(str[0]) != 1)
	{
		return CHAR_TYPE;
	}
	if (str[1] == '-' || isdigit(str[0]) == 1)
	{
		result_type = INT_TYPE;
		while (isdigit(str[i]))
		{
			if (str[++i] == '.' && isdigit(str[i + 1]))
			{
				result_type = DOUBLE_TYPE;
				i++;
			}
		}
		if ((str[i] == 'f' || str[i] == 'F') && result_type == DOUBLE_TYPE)
			result_type = FLOAT_TYPE;

	}
	return result_type;
}

void Caster::turnfromChar(void)
{
	std::cout<< "Character"<< std::endl;
	this->n_char = this->str[0];
	this->n_int = this->n_char; 
	this->n_float = float(this->n_int);
	this->n_double = double(this->n_int);
}

void Caster::turnfromInt_Flo_Dou(void)
{
	std::cout<< "Integer - Float - Double"<< std::endl;
	this->n_int = atoi(this->str.c_str()); 
	this->n_char = this->n_int;
	this->n_float = atof(str.c_str());
	this->n_double = atof(str.c_str());
}


void Caster::displayChar(void)
{
	if (this->type_input == ERROR_TYPE || isascii(this->n_char) == 0)
		std::cout<< "Char : imposible" <<std::endl;
	else if (isprint(this->n_char) != 1)
		std::cout<< "Char : non printable" <<std::endl;
	else
		std::cout<< "Char : " << this->n_char<<std::endl;
}
void Caster::displayInteger(void)
{

}

void Caster::displayFloat(void)
{

}

void Caster::displayDouble(void)
{

}

void Caster::displayError(void)
{

}

void Caster::show_result(void)
{
	this->displayChar();	
	std::cout<< "Integer :"<< this->n_int <<std::endl;
	std::cout<< "Double :"<< this->n_double <<std::endl;
	std::cout<< "Float :"<< this->n_float <<std::endl;
}