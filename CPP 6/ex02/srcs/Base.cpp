/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:45:32 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/08/23 16:17:00 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
	return;
}

Base::Base(const Base & base)
{
	*this = base;
	return;
}

Base::~Base()
{
	return;
}

Base Base::operator=(const Base & base)
{
	if (this == &base)
		return *this;
	return *this;
}

void Base::info(void) const
{
	std::cout << "Im origin base" << std::endl;
}

std::ostream &operator<<(std::ostream& os, const Base &base)
{
	(void)base;
	os << "Base is here ";
	return (os);
}