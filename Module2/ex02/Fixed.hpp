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
        Fixed(const int nbr);                       //constructor with const int
        Fixed(const float convert);                 //constructor with const float
        Fixed(const Fixed &other);                  //copy constructor
        ~Fixed();                                   //destructor

        int toInt(void) const;                      //transforms fixed point nbr to int
        int getRawBits(void) const;                 //get raw bits
        void setRawBits(int const raw);             //set raw bits
        float toFloat(void) const;                  //transforms fixed point to float

        //operator overload comparison operators
        Fixed& operator=(const Fixed &other);       //Assigment operator 
        bool   operator<(const Fixed& other) const; //checks if 1 object it smaller than other
        bool   operator>(const Fixed& other) const; //checks if 1 object it bigger than other
        bool   operator>=(const Fixed& other) const;//checks if 1 object is bigger or equal 
        bool   operator<=(const Fixed& other) const;//checks if 1 object is smaller or equal
        bool   operator==(const Fixed& other) const;//checks for equal between 2 objects
        bool   operator!=(const Fixed& other) const;//checks if 1 object is different that other object

        //arithmetic operators                      
        Fixed operator+(const Fixed& other) const;  //adds a object value to another
        Fixed operator-(const Fixed& other) const;  //subtract a object value to another
        Fixed operator*(const Fixed& other) const;  //multiply a object to another    
        Fixed operator/(const Fixed& other) const;  //divides a object to another

        Fixed operator++(int);                      //post increment . increment then returns value (int is easier way to separete them)
        Fixed operator--(int);                      //post decrement.
        Fixed& operator++(void);                    //pre increment. returns value then increments
        Fixed& operator--(void);                    //pre decrement.

        static const Fixed& min(const Fixed& one, const Fixed& two);
        static Fixed& min(Fixed& one, Fixed& two);
        static const Fixed& max(const Fixed& one, const Fixed& two);
        static Fixed& max(Fixed& one, Fixed& two);
        
  
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);



#endif
