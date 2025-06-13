/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaorema <joaorema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:12:06 by joaorema          #+#    #+#             */
/*   Updated: 2025/06/11 10:32:23 by joaorema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP 
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>


class Fixed
{
    private:
        int _fixedptr;
        static const int _fractbits = 8;
        
    public:
        Fixed();                                    //contructor
        Fixed(const Fixed &other);                  //copy constructor
        Fixed(const int nbr);                       //constructor with const int
        Fixed(const float convert);                 //constructor with const float
        ~Fixed();                                   //destructor
        Fixed& operator=(const Fixed &other);
        int getRawBits(void) const;                 //get raw bits
        void setRawBits(int const raw);             //set raw bits
        float toFloat(void) const;
        int toInt(void) const;
        
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
