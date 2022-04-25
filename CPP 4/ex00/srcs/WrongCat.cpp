/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:32:03 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/25 13:34:52 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : Dog()
{
	this->type = "WrongCat";
	return;
}

WrongCat::~WrongCat()
{
	return;
}

WrongCat& WrongCat::operator=(WrongCat const & ani)
{
	this->type = ani.type;
	return (*this);
}