/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:29:09 by root              #+#    #+#             */
/*   Updated: 2022/04/08 17:21:32 by root             ###   ########.fr       */
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
    std::cout<<str<<" - "<<strREF<<" - "<<strPTR<<std::endl;
    return (0);
}