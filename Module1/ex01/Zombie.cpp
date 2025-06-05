/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:44:49 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/05 12:47:24 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)                                                    //constructor
{
    std::cout << "New zombie has risen..." << std::endl;
}

Zombie::~Zombie(void)                                                   //destructor
{
    std::cout << this->_name << " Died" << std::endl;
}

Zombie::Zombie(std::string name)                                        
{
    this->_name = name;
    std::cout << this->_name << " was bitten..." << std::endl;

}
void Zombie::annouce()
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl; 
}

void Zombie::setName(std::string _name)
{
    this->_name = _name;
}
