/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaorema <joaorema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:12:03 by joaorema          #+#    #+#             */
/*   Updated: 2025/06/11 10:59:14 by joaorema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructor & destructor 

Fixed::Fixed() : _fixedptr(0)                               //starts fixedptr at 0
{
    std::cout << "Creating class" << std::endl;       
}

Fixed::~Fixed()
{
    std::cout << "Destroying class" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Making a copy of class" << std::endl;
    *this = other;
}

//getter and setters

int Fixed::getRawBits(void) const
{
    std::cout << "Getting raw bits called" << std::endl;
    return (this->_fixedptr);   
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "Setting raw bits called" << std::endl;
    this->_fixedptr = raw;
}

//extra functions

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if( this != &other )                                          //check for self-assignment
        this->_fixedptr = other.getRawBits();                     //copy the value of fixedptr from other
    return *this;                                                 //return the current object
}