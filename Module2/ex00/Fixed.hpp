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

class Fixed
{
    private:
        int _fixedptr;
        static const int _fractbits = 8;
        
    public:
        Fixed();                                    //contructor
        ~Fixed();                                   //destructor
        Fixed(const Fixed &other);                  //copy constructor
        int getRawBits(void) const;                 //get raw bits
        void setRawBits(int const raw);             //set raw bits
        Fixed& operator=(const Fixed &other);
        
};

#endif
