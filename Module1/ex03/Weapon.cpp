/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:14:44 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 11:57:28 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>


//Constructor & destructor

Weapon::Weapon(std::string weaponType)                                          //start a weapon with weapontype
{
   _type = weaponType;
}

Weapon::~Weapon(void)
{
   // std::cout << "Clearing class!" << std::endl;
}

//getters and setters

void Weapon::setType(std::string weaponType)                                    //change the weapontype to another
{
    _type = weaponType;
}

const std::string& Weapon::getType() const                                      //returns the type on a specific weapon
{
    return _type;
}