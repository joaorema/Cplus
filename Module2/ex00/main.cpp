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
    Fixed a;
    Fixed b( a );
    Fixed c;
    
    c = b;
    
    
    //a.setRawBits(5);
    //b.setRawBits(10);
    //c.setRawBits(42);
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}

