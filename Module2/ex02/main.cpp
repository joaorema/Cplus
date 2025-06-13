/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaorema <joaorema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:12:09 by joaorema          #+#    #+#             */
/*   Updated: 2025/06/11 10:58:41 by joaorema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <string>


int main( void ) 
{
    Fixed a(42);
    Fixed b(10);


    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    
    std::cout << "a + b is: " << a.operator+(b) << std::endl;
    std::cout << "a - b is: " << a.operator-(b) << std::endl;
    std::cout << "a * b is: " << a.operator*(b) << std::endl;
    std::cout << "a / b is: " << a.operator/(b) << std::endl;

    //more tests

    std::cout << "is a bigger than b? :" << a.operator>(b) << std::endl;
    std::cout << "is a smaller than b? :" << a.operator<(b) << std::endl;
    std::cout << "is a equal to b? :" << a.operator==(b) << std::endl;
    std::cout << "is a different than b? :" << a.operator!=(b) << std::endl;

    std::cout << "Pre increment a : " << a++ << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "Pos increment b : " << ++b << std::endl;
    std::cout << "Pre decrement a :" << a-- << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "Pre decrement b : " << --b << std::endl;
    
    return 0;
}

