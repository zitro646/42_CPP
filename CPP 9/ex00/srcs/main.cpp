/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelangelortizdelburgo <miguelangelor    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:46:55 by mortiz-d          #+#    #+#             */
/*   Updated: 2023/04/10 20:17:48 by miguelangel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

#define CSV "data.csv"

std::map <int , BitcoinExchange>	read_file(std::string dir, char del, std::map <int , BitcoinExchange> list, int arch_type)
{
	std::string line;
	std::ifstream file(dir);
	int i = 0;

	if (file.is_open())
	{
		if (getline (file,line))
		{
			while ( getline (file,line) )
			{
				list.insert(std::make_pair(i , BitcoinExchange(line, del, arch_type)));
				i++;
			}
		}
		else
		std::cout << "Error : Empty file"<<std::endl;
  	}
	else 
	 	std::cout << "Error : Unable to open file"<<std::endl;
	return (list);
}

void search_value(std::map <int , BitcoinExchange> csv, BitcoinExchange list)
{
	if (list.get_error() != "")
	{
		std::cout << list.get_error() << std::endl;
		return ;
	}
		
	if (list.get_unix_date() < csv[0].get_unix_date())
	{
		std::cout << "Error: earliest date registered is "<< csv[0].get_string_date()<< " input is "<< list.get_string_date()<< std::endl;
		return;
	}

	if (csv[csv.size() - 1].get_unix_date() < list.get_unix_date())
	{
		std::cout << list.get_string_date() << " => " << list.get_bit_value() << " = " <<  (csv[csv.size() - 1].get_bit_value() * list.get_bit_value()) << std::endl;
		return;
	}

	for (int x = 0;x < (int)csv.size();x++)
	{	
		if (csv[x].get_unix_date() <= list.get_unix_date() && list.get_unix_date() < csv[x + 1].get_unix_date())
		{
			std::cout << csv[x].get_string_date() << " => " << list.get_bit_value() << " = " <<  (csv[x].get_bit_value() * list.get_bit_value()) << std::endl;
			break;
		}
	}
	
}

int main (int argc, char **argv)
{
	std::map <int , BitcoinExchange>	csv;
	std::map <int , BitcoinExchange>	list;

	if (argc == 1 || argc > 2)
		std::cout<< "Just one arg as input is mandatory" << std::endl;
    else
	{
        csv  = read_file(CSV, ',', csv, 0);
		list = read_file(argv[1], '|', list, 1);
		for (int x = 0; x != (int)list.size(); x++)
			search_value(csv, list[x]);
	}
	return 0;
}