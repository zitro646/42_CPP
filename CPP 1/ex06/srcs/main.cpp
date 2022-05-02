/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:38:56 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/05/02 09:44:18 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
int main (int argc, char** argv)
{
    int i;
    Karen karen;
    std::string str;

    i = 1;
    while ( i < argc)
    {
        str = argv[i++];
        karen.complain(str);
    }
}