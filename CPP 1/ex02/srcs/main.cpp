/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:29:09 by root              #+#    #+#             */
/*   Updated: 2022/04/26 13:45:38 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

//clang++ main.cpp

int main(void)
{
    std::string str;
    std::string &strREF = str;
    std::string* strPTR = &str;
    
    str = "HI THIS IS BRAIN";
    std::cout<<"FRASES"<<std::endl;
    std::cout<<"El valor original               ->"<<str<<std::endl;
    std::cout<<"El valor al que hace referencia ->"<<strREF<<std::endl;
    std::cout<<"El valor dentro del puntero     ->"<<*strPTR<<std::endl;

    std::cout<<"PUNTEROS"<<std::endl;
    std::cout<<"La direccion del valor original ->"<<&str<<std::endl;
    std::cout<<"La direccion a la referencia    ->"<<&strREF<<std::endl;
    std::cout<<"El valor del puntero            ->"<<strPTR<<std::endl;
    return (0);
}