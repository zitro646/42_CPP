/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:06:29 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/04 16:16:34 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include "general.hpp"
using namespace std;

class Contact
{
	private:
		string	first_name;
		string	last_name;
		string	nickname;
		string	phone;
		string	darkest_secret;
		
	public:
	//Constructor
	Contact (void);
	//Destructor
	~Contact (void);
	//Gets
	string get_First_name(void);
	string get_Last_name(void);
	string get_Nickname(void);
	string get_Phone(void);
	string get_Darkest_secret(void);
	//Sets
	void set_First_name(string str);
	void set_Last_name(string str);
	void set_Nickname(string str);
	void set_Phone(string str);
	void set_Darkest_secret(string str);
	
};
#endif