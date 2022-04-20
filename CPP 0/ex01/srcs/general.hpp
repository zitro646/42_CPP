/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:57:26 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/20 16:12:29 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERAL_H
# define GENERAL_H

#include<iostream>
#include<iomanip>
#include<string>
#include "phoneBook.class.hpp"
#include "contact.class.hpp"

std::string get_input(void);
int	valid_number(int current_tam, std::string str);

#endif