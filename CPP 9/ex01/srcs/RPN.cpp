/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:15:25 by miguelangelortizdelburgo          #+#    #+#             */
/*   Updated: 2022/12/02 16:41:42 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ) {

  // std::cout << "Default constructor called" << std::endl;
  return ;
}

RPN::RPN( std::string str ) {

  (void) str;
  // std::cout << "Parameter constructor called" << std::endl;
  return ;
  
}

RPN::RPN( const RPN & var ) {
  
  // std::cout << "Copy constructor called" << std::endl;
  *this = var;
  return ;
  
}

RPN::~RPN( void ) {
  
  // std::cout << "Destructor called" << std::endl;
  return ;

}

RPN & RPN::operator=(const RPN &tmp) {

  (void) tmp;
  // std::cout << "Operator equalizer called" << std::endl;
  return (*this);
  
}

std::ostream &operator<<(std::ostream& os, const RPN &tmp) 
{
  std::list <std::string> l = tmp.getlist();
  os << std::endl << "RPN list" << std::endl;
  for (iterator it = l.begin(); it != l.end(); ++it)
  {
    os << *it << " ";
  }
	return (os);
  
}

const char* RPN::ErrorRPN::what() const throw()
{
	return ( "Error");
}

void RPN::fillRPN	( std::string str , char c)
{
  
  std::stringstream 			test(str);
  std::string 				segment;

  while (std::getline(test,segment,c))
  this->list.push_back(segment);

}

bool RPN::isOperator(std::string str)
{
	char aux[4] = {'+','-','*','/'};
	if (str.length() > 1)
		return 0;
	for (int x = 0; x < 4 ; x++)
	{
		if (str[0] == aux[x])
			return 1;
	}
	return 0;
}

bool RPN::isIntNumber(std::string str)
{
	char * e;
	double		x;
	
	x = strtod(str.c_str(),&e);
	if (*e != '\0')
		return 0;
	if ( x < std::numeric_limits<int>::lowest() || \
	x > std::numeric_limits<int>::max())
  		return 0;
	if (fmod(x, 1.0) != 0)
        return 0;
	if (x > 10 || x < 0)
        return 0;
  // std::cout << "N º checked " << x << std::endl;
	return 1;
}

bool RPN::check_input (void)
{
    for (iterator it = this->list.begin(); it != this->list.end(); ++it)
    {
		// std::cout << *it << " is a number ? "<< isIntNumber(*it) <<"is operator? "<< isOperator(*it) << std::endl;
		if (isIntNumber(*it) || isOperator(*it))
			continue;
		else
			return (0);
    }
	return 1;
}

void show_operation(std::list <std::string> aux)
{
  for (iterator it = aux.begin(); it != aux.end(); ++it)
  {
    std::cout << *it << " " ;
  }
}

int getIntNumber(std::string str)
{
  // std::cout << "Nº given " << str << std::endl;
	return ( atoi(str.c_str()));
}

int getOperator(std::string str)
{
  char aux[4] = {'+','-','*','/'};
	for (int x = 0; x < 4 ; x++)
	{
		if (str[0] == aux[x])
			return x;
	}
	return -1;
}

std::string		RPN::get_answer		(void)
{
  int x;
  int y;
  std::list <std::string> aux;
  iterator it_aux;

  if (!this->check_input())
    throw RPN::ErrorRPN();
  for (iterator it = this->list.begin(); it != this->list.end(); ++it)
  {
    if (isIntNumber(*it))
    {
      aux.push_back(*it);
      // show_operation(aux);
      std::cout << std::endl;
    }
    else
    {
      if (aux.size() <= 1)
        throw RPN::ErrorRPN();
      it_aux = aux.end();
      it_aux--;
      y = getIntNumber(*it_aux);
      aux.pop_back();
      it_aux = aux.end();
      it_aux--;
      x = getIntNumber(*it_aux);
      aux.pop_back();
      
      // std::cout << "Operator type " << getOperator(*it) << std::endl;
      // std::cout << " x = " << x  << " | y = "<< " "<< y;
      switch (getOperator(*it))
      {
        case 0:
          // std::cout << " + "  << std::endl;
          aux.push_back(std::to_string(x + y));
          break;
        case 1:
        // std::cout << " - "  << std::endl;
          aux.push_back(std::to_string(x - y));
          break;
        case 2:
        // std::cout << " * " << (x * y) << std::endl;
          aux.push_back(std::to_string(x * y));
          break;
        case 3:
          if (y == 0)
            throw RPN::ErrorRPN();
          // std::cout << " Div " << (x / y) << std::endl;
          aux.push_back(std::to_string(x / y));
          break;
        default:
          throw RPN::ErrorRPN();
          break;
      }
    }
  }
  // show_operation(aux);
  // std::cout << std::endl;
  if (aux.size() > 1)
    throw RPN::ErrorRPN();
  return aux.front();
}