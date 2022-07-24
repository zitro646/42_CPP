/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:57:27 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/24 16:58:26 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Array.hpp"
#include "Array.ipp"

void leaks(void)
{
    system("leaks -q test");
}

int main(void)
{
    atexit(leaks);
    
    Array<int> x(4);
    Array<int> y(7);
    
    for (int i = 0; i < (int)x.getsize();i++)
        x[i] = i;
    for (int i = 0; i < (int)y.getsize();i++)
        y[i] = i;
    std::cout << x << std::endl;
    std::cout << "____________________" << std::endl;
    std::cout << y << std::endl;
    std::cout << "____________________" << std::endl;
    std::cout << "Hacemos una deep copy (x = y)" << std::endl;
    x = y;
    x[0] = 42;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    
    std::cout << "____________________" << std::endl;
    std::cout << "Usamos el constructor vacio y el de copy " << std::endl;
    Array<int> z(y);
    Array<int> t;
    std::cout << z << std::endl;
    std::cout << t << std::endl;
    std::cout << "____________________" << std::endl;
    std::cout << "Comprobamos distintos arrays" << std::endl;
    Array<float> floats(7);
    Array<int> ints(4);
    Array<std::string> strings(6);
    for (int i = 0; i < (int)floats.getsize();i++)
        floats[i] = (i + 0.1f);
    for (int i = 0; i < (int)ints.getsize();i++)
        ints[i] = i;
    for (int i = 0; i < (int)strings.getsize();i++)
        strings[i] = "aaaaaaa";
    std::cout << floats << std::endl;
    std::cout << ints << std::endl;
    std::cout << strings << std::endl;
    std::cout << "______THE_END_______" << std::endl;

    try
    {
        ints[12] = 4;
    }
    catch(const std::exception& e)
    {
        std::cout << "Error type -> " << e.what() << std::endl << std::endl;
    }
    
    return 0;
}

// #include <iostream>
// #include "Array.hpp"
// #include "Array.ipp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     std::cout << "Error trying" << std::endl;
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << "1." << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << "2." << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }