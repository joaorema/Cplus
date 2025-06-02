/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:41:15 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/02 16:34:03 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

//file where we define what the contructor e destructor do in this object

Phonebook::Phonebook( void )
{
    std::cout << "Constructor test" << std::endl;
}
void Phonebook::addContact( void )
{
    
}

void Phonebook::searchContact( void )
{
    
}

Phonebook::~Phonebook ( void )
{
    std::cout << "Destuctor test" << std::endl;
}