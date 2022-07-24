/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:57 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/24 13:42:52 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"


Caster::Caster(std::string n_str): str(n_str), type_input(ERROR_TYPE)
{
	type_input = identify_type(n_str);
	//std::cout << "Casteo -> " << type_input << std::endl;
	return;
}

Caster::Caster(const Caster & cast)
{
	*this = cast;
}

Caster::~Caster()
{
	return;
}

Caster Caster::operator=(const Caster & caster)
{
	if (this == &caster)
		return *this;
	this->str = caster.str;
	this->type_input  = caster.type_input;
	return *this;
}

int	Caster::identify_type(std::string str)
{
	int result_type;
	int i;
	int dot;

	i = 1;
	dot = 0;
	result_type = ERROR_TYPE;
	if (str.length() == 1 && !!isascii(str[0]) == 1 && !!isdigit(str[0]) != 1)
	{
		return CHAR_TYPE;
	}
	if (str[0] == '-' || !!isdigit(str[0]) == 1)
	{
		result_type = INT_TYPE;
		while (!!isdigit(str[i]) || str[i] == '.' )
		{
			if (str[i] == '.')
			{
				if (dot != 0 && str[i] == '.')
					return ERROR_TYPE;
				result_type = DOUBLE_TYPE;
				dot++;
			}
			i++;
		}
		if ((str[i] == 'f' || str[i] == 'F') && result_type == DOUBLE_TYPE)
			if (str[i - 1] == '.')
				result_type = ERROR_TYPE;
			else
				result_type = FLOAT_TYPE;
		else if (str[i] != '\0' || str[i - 1] == '.' || (result_type == FLOAT_TYPE && str[i + 1] != '\0'))
			result_type = ERROR_TYPE;
			
	}
	return result_type;
}

void Caster::displayChar(void)
{
	int value;
	double value_2;
	
	value = atoi(this->str.c_str());
	value_2 = atof(this->str.c_str());
	if (this->type_input == ERROR_TYPE)
		std::cout<< "Char : imposible" <<std::endl;
	else if (this->type_input == CHAR_TYPE)
		std::cout<< "Char : " << static_cast<char>(this->str[0]) <<std::endl;
	else
	{
		if (value_2 - static_cast<double>(value) == 0 && isprint(value) == 1)
			std::cout<< "Char : "<< static_cast<char>(value) <<std::endl;
		else
			std::cout<< "Char : Non Printable" <<std::endl;
	}
}

void Caster::displayInteger(void)
{
	int value;
	double value_2;
	
	value = atoi(this->str.c_str());
	value_2 = atof(this->str.c_str());
	if (this->type_input == ERROR_TYPE)
		std::cout<< "Int : imposible" <<std::endl;
	else if (this->type_input == CHAR_TYPE)
		std::cout<< "Int : "<< static_cast<int>(this->str[0]) <<std::endl;
	else
	{
		if ( value_2 < std::numeric_limits<int>::min() || value_2 > std::numeric_limits<int>::max() )
			std::cout<< "Int : overlimit " <<std::endl;
		else 
			std::cout<< "Int : " << static_cast<int>(value) <<std::endl;
	}
}

int Caster::float_inff(void)
{
	std::string n_str;
	float x;
	char * e;

	n_str = this->str;
	if (this->type_input == FLOAT_TYPE)
		n_str.pop_back();
	x = (float)strtod(n_str.c_str(),&e);
	if (*e != '\0')
		return 2;
	if ( x < std::numeric_limits<float>::lowest())
		return -1;
	if (x > std::numeric_limits<float>::max())
		return 1;
	return 0;
}

void Caster::displayFloat(void)
{
	float value;
	
	value = atof(this->str.c_str());
	if (this->type_input == ERROR_TYPE)
		std::cout<< "Float : nanf" <<std::endl;
	else if (this->type_input == CHAR_TYPE)
		std::cout<< "Float : "<< static_cast<float>(this->str[0]) << ".0f" <<std::endl;
	else
	{
		if (float_inff() != 0)
		{
			if (float_inff() == 1)
				std::cout<< "Float : +inff " <<std::endl;
			else if (float_inff() == -1)
				std::cout<< "Float : -inff " <<std::endl;
			else
				std::cout<< "Float : error (HOW?)" <<std::endl;
		}
		else 
			if (value == floor(value))
				std::cout<< "Float : "<< static_cast<float>(value) << ".0f"<<std::endl;
			else
			 	std::cout<< "Float : "<< static_cast<float>(value) << "f"<<std::endl;
	}
}

int Caster::double_inff(void)
{
	std::string n_str;
	double x;
	char * e;

	n_str = this->str;
	if (this->type_input == FLOAT_TYPE)
		n_str.pop_back();
	x = strtod(n_str.c_str(),&e);
	if (*e != '\0')
		return 2;
	if ( x < std::numeric_limits<double>::lowest())
		return -1;
	if (x > std::numeric_limits<double>::max())
		return 1;
	return 0;
}

void Caster::displayDouble(void)
{
	double value;

	value = atof(this->str.c_str());
	if (this->type_input == ERROR_TYPE)
		std::cout<< "Double : nan" <<std::endl;
	else if (this->type_input == CHAR_TYPE)
		std::cout<< "Double : "<< static_cast<double>(this->str[0]) << ".0" <<std::endl;
	else
	{
		if (double_inff() != 0)
		{
			if (double_inff() == 1)
				std::cout<< "Double : +inff " <<std::endl;
			else if (double_inff() == -1)
				std::cout<< "Double : -inff " <<std::endl;
			else
				std::cout<< "Double : error (HOW?)" <<std::endl;
		}
		else 
			if (value == floor(value))
				std::cout<< "Double : "<< static_cast<double>(value) << ".0"<<std::endl;
			else
			 	std::cout<< "Double : "<< static_cast<double>(value) << std::endl;
	}
}

void Caster::show_result(void)
{	
	this->displayChar();
	this->displayInteger();
	this->displayFloat();
	this->displayDouble();
}