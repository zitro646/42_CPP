/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:41:12 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/06 15:44:37 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
#define DATA_H

#include<iomanip>
#include<iostream>
class Data
{
	public:
		Data(std::string name);
		Data(Data& data);
		Data(void);
		~Data();
		Data& operator= (Data const & data);
		void salute(void);
	private:
		std::string name;
		
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif