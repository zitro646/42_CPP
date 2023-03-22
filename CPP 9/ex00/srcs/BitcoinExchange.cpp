/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:15:25 by miguelangelortizdelburgo          #+#    #+#             */
/*   Updated: 2022/12/02 16:41:42 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) :_origin("") , _bit_value(0), _error_detected("")
{

  //std::cout << "Default constructor empty called" << std::endl;
  return ;
}

BitcoinExchange::BitcoinExchange( std::string str , char del) : _origin(str) , _bit_value(0), _error_detected("") 
{
  std::vector<std::string> data ;
  
  data = this->split(str, del);
  if (data.size() != 2)
    this->_error_detected = "Error: bad input => "+ str;
  else
  {
    this->set_date(data[0]);
    this->set_bit_value(data[1]);
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
  // this->_date = tmp.get_date();
  this->_date.tm_year = tmp.get_date().tm_year;
  this->_date.tm_mon = tmp.get_date().tm_mon;
  this->_date.tm_mday = tmp.get_date().tm_mday;
  this->_error_detected = tmp.get_error();
  //std::cout << "Operator equalizer called" << std::endl;
  return (*this);
  
}

std::ostream &operator<<(std::ostream& os, const BitcoinExchange &tmp) {

  (void) tmp;
	os <<"Date : "<< tmp.get_string_date() << " - Value : " << tmp.get_bit_value() << " " << tmp.get_error() << std::endl;
	return (os);
  
}

std::string trim(std::string str , std::string to_trim)
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

std::vector<std::string> BitcoinExchange::split(std::string str, char c)
{
    std::stringstream 			test(str);
    std::string 				segment;
    std::vector <std::string>	seglist;

    while (std::getline(test,segment,c))
    	seglist.push_back(trim(segment, " \n\r\t\f\v"));
    return (seglist);
}

std::string BitcoinExchange::get_string_date	(void) const
{
  std::string date = "";
  
  if (this->get_error() == "")
    date = std::to_string(this->_date.tm_year) + "-" + std::to_string(this->_date.tm_mon) + "-" + std::to_string(this->_date.tm_mday);
  else
    date = "Error Date";
  return (date);
};

void BitcoinExchange::set_bit_value (std::string str)
{
	char * e;
  
  this->_bit_value = strtod(str.c_str(),&e);
	if ( this->_bit_value < std::numeric_limits<int>::lowest() || \
    this->_bit_value > std::numeric_limits<int>::max())
  
    this->_error_detected = "Error: too large a number.";
  
  if (this->_bit_value < 0 && this->_error_detected == "")
    this->_error_detected = "Error: not a positive number.";
}

void BitcoinExchange::set_date (std::string str)
{
  std::stringstream ss(str);
  ss >> std::get_time(&this->_date, "%Y-%m-%d");

  if (ss.fail()) {
    this->_error_detected = "Error: bad date provided.";
  }
  else
  {
    this->_date.tm_year += 1900;
    this->_date.tm_mon += 1;
  }
}