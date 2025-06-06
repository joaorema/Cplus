/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:12:22 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 12:15:39 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <string>
#include <iostream>

//constructor & destructor

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)   //: initializer list of name and weapon
{
    
}

HumanA::~HumanA(void)
{
    
}

//fuctions


void HumanA::attack()                                                              //Displays name and uses get type to weapontype
{
    std::cout << _name << " attacks with there " << _weapon.getType() << std::endl;   
}