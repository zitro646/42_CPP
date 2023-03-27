/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:43:12 by miguelangel       #+#    #+#             */
/*   Updated: 2023/03/23 21:01:50 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

#define CSV "data.csv"

std::map <int , BitcoinExchange>	read_file(std::string dir, char del, std::map <int , BitcoinExchange> list)
{
	std::string line;
	std::ifstream file(dir);
	int i = 0;
	(void)list;
	(void)del;	
	if (file.is_open())
	{
		if (getline (file,line))
		{
			while ( getline (file,line) )
			{
				// std::cout << line <<std::endl; 
				list.insert(std::make_pair(i , BitcoinExchange(line,del)));
				i++;
			}
		}
		else
		std::cout << "Error : Empty file"<<std::endl;
  	}
	else 
	 	std::cout << "Error : Unable to open file"<<std::endl;
	// std::cout << "List size -> " << list.size() << " vs " << i <<std::endl;
	return (list);
}


bool datecomparison(std::tm date1, std::tm date2) {
	
    std::time_t time1 = std::mktime(&date1);
    std::time_t time2 = std::mktime(&date2);
	
    return (time1 < time2);
}

void search_value(std::map <int , BitcoinExchange> csv, BitcoinExchange list)
{
	(void)csv;

	if (list.get_error() != "")
	{
		std::cout << list.get_error() << std::endl;
		return ;
	}
		
	if (list.get_unix_date() < csv[0].get_unix_date())
	{
		std::cout << "Error: earliest date registered is "<< csv[0].get_string_date()<< std::endl;
		return;
	}

	if (csv[csv.size() - 1].get_unix_date() < list.get_unix_date())
	{
		std::cout << list.get_string_date() << " => " << list.get_bit_value() << " = " <<  (csv[csv.size() - 1].get_bit_value() * list.get_bit_value()) << std::endl;
		return;
	}

	// if (csv[csv.size() - 1].get_unix_date() == list.get_unix_date())
			// break;

	// std::cout << "Csv count -> "<< (int)csv.size() - 1 << std::endl;
	for (int x = 0;x < (int)csv.size();x++)
	{	
		// std::cout << "Size -> "<< x << " - Csv count -> "<< (int)csv.size()  << std::endl;
		// std::cout << csv[x].get_string_date() << " <= " << list.get_string_date() << " && " << list.get_string_date() << " < " <<  csv[x + 1].get_string_date() << std::endl;
		//  std::cout << csv[x].get_unix_date() << " <= " << list.get_unix_date() << " && " << list.get_unix_date() << " < " <<  csv[x + 1].get_unix_date() << std::endl;
		//  std::cout << (csv[x].get_unix_date()  <=  list.get_unix_date()) << " && " << (list.get_unix_date() <  csv[x + 1].get_unix_date()) << std::endl;
		if (csv[x].get_unix_date() <= list.get_unix_date() && list.get_unix_date() < csv[x + 1].get_unix_date())
		{
			std::cout << csv[x].get_string_date() << " => " << list.get_bit_value() << " = " <<  (csv[x].get_bit_value() * list.get_bit_value()) << std::endl;
			// std::cout<< "______" << std::endl;
			break;
		}
	}
	
}

void leaks (void)
{
	//system ("leaks -q ./btc");
}

int main (int argc, char **argv)
{
	atexit (leaks);
	std::map <int , BitcoinExchange>	csv;
	std::map <int , BitcoinExchange>	list;
	(void)list;
	(void)csv;
	if (argc == 1 || argc > 2)
		std::cout<< "Just one arg as input is mandatory" << std::endl;
    else
	{
        csv  = read_file(CSV, ',', csv);
		list = read_file(argv[1], '|', list);
	}
	
	for (int x = 0; x != (int)list.size(); x++)
		search_value(csv, list[x]);

	return 0;
}