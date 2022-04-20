/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:54:11 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/20 16:14:53 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"general.hpp"

//Constructor
PhoneBook::PhoneBook(void)
{
	return;
}
//Destructor
PhoneBook::~PhoneBook(void)
{
	return;
}

//Functions
void PhoneBook::addContact(int pos)
{
	std::string	input;

	std::cout<<"Insert first name : ";
	this->contacts[pos].set_First_name(get_input());
	std::cout<<"Insert last name : ";
	this->contacts[pos].set_Last_name(get_input());
	std::cout<<"Insert nickname : ";
	this->contacts[pos].set_Nickname(get_input());
	std::cout<<"Insert phone number : ";
	this->contacts[pos].set_Phone(get_input());
	std::cout<<"Insert his secret : ";
	this->contacts[pos].set_Darkest_secret(get_input());
	std::cout<<"Contact added to the phone book"<<std::endl<<std::endl;
}

void	PhoneBook::show_data(std::string str)
{
	if (str.length() > 10)
		std::cout<< std::setw(9) <<str.substr(0, 9)<<".";
	else
		std::cout<< std::setfill (' ')<<std::setw(10)<<str.substr(0, 9);
}

void	PhoneBook::showContact(int pos)
{
	std::cout<<"|  ";
	std::cout<<pos + 1;
	std::cout<<"  |";
	this->show_data(this->contacts[pos].get_First_name());
	std::cout<<"|";
	this->show_data(this->contacts[pos].get_Last_name());
	std::cout<<"|";
	this->show_data(this->contacts[pos].get_Nickname());
	std::cout<<"|";
	this->show_data(this->contacts[pos].get_Phone());
	std::cout<<"|"<<std::endl;
}

void	PhoneBook::showSpecificContact(int pos)
{
	std::cout<<"__________________________________________________"<<std::endl;
	std::cout<<"                 Data on index "<<pos + 1<<"                "<<std::endl;
	std::cout<<"__________________________________________________"<<std::endl;
	std::cout<<" First Name : ";
	std::cout << this->contacts[pos].get_First_name()<<std::endl;
	std::cout<<" Last Name : ";
	std::cout << this->contacts[pos].get_Last_name()<<std::endl;
	std::cout<<" Nickname : ";
	std::cout << this->contacts[pos].get_Nickname()<<std::endl;
	std::cout<<" Phone Number :";
	std::cout << this->contacts[pos].get_Phone()<<std::endl;
	std::cout<<" Darkest Secret :";
	std::cout << this->contacts[pos].get_Darkest_secret()<<std::endl;
	std::cout<<"__________________________________________________"<<std::endl<<std::endl;
}

void	PhoneBook::searchContact(int tam)
{
	int i;
	std::string input;

	i = 0;
	if (tam != 0)
	{
		std::cout<<"__________________________________________________"<<std::endl;
		std::cout<<"|Index|First Name|Last  Name|Nick  Name|   Phone  |"<<std::endl;
		while (i < tam)
		{
			std::cout<<"__________________________________________________"<<std::endl;
			this->showContact(i);
			i++;
		}
		std::cout<<"__________________________________________________"<<std::endl;
		std::cout<<std::endl<<"Select a number from 1 to "<<tam <<std::endl<<"Index : ";
		getline(std::cin, input);
		if (valid_number(tam, input))
			showSpecificContact(((int)input[0]) - 49);
		else
			std::cout<<"Invalid number input"<<std::endl;
	}
}