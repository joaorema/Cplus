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

// in a fixed point system we store values with nbr * 256  
//constructor & destructor 

Fixed::Fixed() : _fixedptr(0)                               //starts fixedptr at 0
{
    std::cout << "Default constructor called" << std::endl;       
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int nbr) : _fixedptr(nbr << _fractbits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float convert) : _fixedptr(roundf(convert * (1 << this->_fractbits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destroying class" << std::endl;
}

//getter and setters

int Fixed::getRawBits(void) const
{
    //std::cout << "Getting raw bits called" << std::endl;
    return (this->_fixedptr);   
}

void Fixed::setRawBits(int const raw)
{
    //std::cout << "Setting raw bits called" << std::endl;
    this->_fixedptr = raw;
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->_fixedptr) / (1 << this->_fractbits)); // Divide the raw fixed-point value by 2^_fractbits to get the float equivalent(we float the divide)
}

int Fixed::toInt(void) const   
{
    return this->_fixedptr >> this->_fractbits;                       // Right shift (or divide) by 2^_fractbits to get the integer part (divided value /256 = 2^8)
}

//copy constructor 

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if( this != &other )                                                    //check for self-assignment
        this->_fixedptr = other.getRawBits();                               //copy the value of fixedptr from other
    return *this;                                                           //return the current object
}

//extra fuctions                                                            // an overload of the << operator 

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) 
{
    os << fixed.toFloat();
    return os;
}

