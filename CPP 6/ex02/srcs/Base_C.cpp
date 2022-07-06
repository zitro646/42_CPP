/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base_C.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:42:04 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/06 15:56:07 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base_C.hpp"

Base_C::Base_C()
{
	return;
}

Base_C::~Base_C()
{
	return;
}

void Base_C::info(void) const
{
	std::cout << "Im base C" << std::endl;
}