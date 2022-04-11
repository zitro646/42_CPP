/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:23:26 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/05 14:02:26 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "general.hpp"
#include "contact.class.hpp"
using namespace std;

class PhoneBook
{
	public:
		Contact	contacts[8];
			
	//Constructor
	PhoneBook (void);
	//Destructor
	~PhoneBook (void);
	//Functions
	void	addContact(int pos);
	void	searchContact(int tam);
	void	showContact(int pos);
	void	showSpecificContact(int pos);
	void	show_data(string str);
};
#endif