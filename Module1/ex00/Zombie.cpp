/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:07:22 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 10:57:30 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(void)
{
   
}
Zombie::~Zombie(void)
{
    std::cout << this->_name << " Died!" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << " was bitten" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl; 
}