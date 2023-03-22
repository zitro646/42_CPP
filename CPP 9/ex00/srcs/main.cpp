/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelangelortizdelburgo <miguelangelor    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:43:12 by miguelangel       #+#    #+#             */
/*   Updated: 2023/03/21 20:58:16 by miguelangel      ###   ########.fr       */
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

bool isdateBetween(std::tm date, std::tm past, std::tm future) {
    std::time_t time = std::mktime(&date);
    std::time_t pastTime = std::mktime(&past);
    std::time_t futureTime = std::mktime(&future);
	
    return (pastTime <= time && time < futureTime);
}

bool datecomparison(std::tm date1, std::tm date2) {
    std::time_t time1 = std::mktime(&date1);
    std::time_t time2 = std::mktime(&date2);
	
    return (time1 < time2);
}

void search_value(std::map <int , BitcoinExchange> csv, std::map <int , BitcoinExchange> list)
{
	for (int x = 0; x < (int)list.size(); x++)
	{
		if (list[x].get_error() != "")
		{
			std::cout << list[x].get_error() << std::endl;
			continue;
		}
		
		if (datecomparison(list[x].get_date(), csv[0].get_date()))
		{
			std::cout << list[x].get_string_date() << " => " << list[x].get_bit_value() << " = " <<  (csv[0].get_bit_value() * list[x].get_bit_value()) << std::endl;
			continue;
		}

		if (datecomparison(csv[csv.size() - 1].get_date() , list[x].get_date()))
		{
			std::cout << list[x].get_string_date() << " => " << list[x].get_bit_value() << " = " <<  (csv[csv.size() - 1].get_bit_value() * list[x].get_bit_value()) << std::endl;
			continue;
		}

		for (int y = 0;y <= (int)csv.size();y++)
		{
			if (isdateBetween(list[x].get_date(), csv[y].get_date(),csv[y + 1].get_date() ))
			{
				std::cout << list[x].get_string_date() << " => " << list[x].get_bit_value() << " = " <<  (csv[y].get_bit_value() * list[x].get_bit_value()) << std::endl;
				break;
			}
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
	(void)argv;
	if (argc == 1 || argc > 2)
		std::cout<< "Just one arg as input is mandatory" << std::endl;
    else
	{
        csv  = read_file(CSV, ',', csv);
		list = read_file(argv[1], '|', list);
	}

	// for (int x = 0; x != (int)list.size(); x++)
	// 	std::cout<< list[x].get_string_date() << std::endl;

	search_value(csv, list);
	return 0;
}