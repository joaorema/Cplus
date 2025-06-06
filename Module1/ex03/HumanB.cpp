/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:14:34 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 12:16:02 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>
#include "Weapon.hpp"

//constructor & destructor

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
   
}

HumanB::~HumanB(void)
{
   // std::cout << "Clearing Class" << std::endl;
}

//fuctions

void HumanB::attack()                                                             
{
    if(_weapon) 
        std::cout << _name << " attacked with there " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon to attack " << std::endl;
}

//getters & setters

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

