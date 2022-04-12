/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:38:56 by root              #+#    #+#             */
/*   Updated: 2022/04/12 15:33:45 by root             ###   ########.fr       */
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