/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelangelortizdelburgo <miguelangelor    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:46:59 by mortiz-d          #+#    #+#             */
/*   Updated: 2023/04/10 20:44:54 by miguelangel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) :_origin("") , _unix_date(0), _bit_value(0), _error_detected("")
{

  //std::cout << "Default constructor empty called" << std::endl;
  return ;
}

BitcoinExchange::BitcoinExchange( std::string str , char del, int arch_type) : _origin(str) , _unix_date(0), _bit_value(0), _error_detected("") 
{
	(void)arch_type;
	std::stringstream 	test(str);
	std::string 				segment;

	if (this->get_origin_size(str, del) != 2)
		this->_error_detected = "Error: bad input => "+ str;
	else
  	{
    	std::getline(test,segment,del);
    	this->set_date(this->trim(segment, " \n\r\t\f\v"));
    	std::getline(test,segment,del);
    	this->set_bit_value(this->trim(segment, " \n\r\t\f\v"), arch_type);
	}
	return ; 
}



BitcoinExchange::BitcoinExchange( const BitcoinExchange & var ) {
  
  //std::cout << "Copy constructor called" << std::endl;
  *this = var;
  return ;
  
}

BitcoinExchange::~BitcoinExchange( void ) {
  
  //std::cout << "Destructor called" << std::endl;
  return ;

}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &tmp) {

  this->_origin = tmp.get_origin();
  this->_bit_value = tmp.get_bit_value();
  this->_date.tm_year = tmp.get_date().tm_year;
  this->_date.tm_mon = tmp.get_date().tm_mon;
  this->_date.tm_mday = tmp.get_date().tm_mday;
  this->_error_detected = tmp.get_error();
  this->_unix_date = tmp.get_unix_date();
  //std::cout << "Operator equalizer called" << std::endl;
  return (*this);
}

std::ostream &operator<<(std::ostream& os, const BitcoinExchange &tmp) {

  if (tmp.get_error() != "")
    os << tmp.get_error() << std::endl;
  else
	  os <<"Date : "<< tmp.get_string_date() << " == " << tmp.get_unix_date() << " - Value : " << tmp.get_bit_value() << std::endl;
	return (os);
  
}

std::string BitcoinExchange::trim(std::string str , std::string to_trim)
{
  //Trim from right
  for (int x = 0;x < (int)str.length(); x++)
  {
    if (to_trim.find(str[x]) > to_trim.length())
    {  
		  str.erase(0 , x);
		  break;
	  }      
  }
	//Trim from left
	for (int x = str.length();x > 0; x--)
  {
    if (to_trim.find(str[x]) < to_trim.length())
    {  
	    str.erase(x , (int)str.length());
	    break;
	  }  
  }
  return (str);
}

std::string BitcoinExchange::get_string_date	(void) const
{
  std::string date = "";
  
  if (this->get_error() == "")
    date = std::to_string(this->_date.tm_year + 1900) + "-" + std::to_string(this->_date.tm_mon + 1) + "-" + std::to_string(this->_date.tm_mday);
  else
    date = "Error Date";
  return (date);
};

void BitcoinExchange::set_bit_value (std::string str , int  arch_type)
{
	char * e;
  
	this->_bit_value = strtod(str.c_str(),&e);
	// if ( this->_bit_value < std::numeric_limits<int>::lowest() ||	this->_bit_value > std::numeric_limits<int>::max())
    if ( arch_type == 1 && (this->_bit_value < 0))	
		this->_error_detected = "Error: not a positive number.";
	if ( arch_type == 1 && (this->_bit_value > 1000))	
		this->_error_detected = "Error: too large a number.";
	if ( this->_bit_value < 0 && this->_error_detected == "" )
		this->_error_detected = "Error: not a positive number.";
}

void BitcoinExchange::set_date (std::string str)
{
  std::stringstream ss(str);

  std::memset(&this->_date, 0, sizeof(this->_date));
  ss >> std::get_time(&this->_date, "%Y-%m-%d");
  if (ss.fail())
    this->_error_detected = "Error: bad date provided.";
  else
  {
    std::time_t time_unix = std::mktime(&this->_date);
    this->_unix_date = time_unix;
    // std::cout << "1 Unix time is " << time_unix << std::endl; 
  }
  
}

int BitcoinExchange::get_origin_size(std::string str, char del)
{
  std::stringstream 	test(str);
  std::string 				segment;
  int                 x;

  x = 0;
  while (std::getline(test,segment,del))
  	x++;
  return (x);
}