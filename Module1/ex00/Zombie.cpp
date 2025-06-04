/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:51:56 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/04 18:27:09 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void::Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ...." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << "was bitten" << std::endl;
}

Zombie::Zombie(void)
{
    
}
Zombie::~Zombie(void)
{
    std::cout << _name << " Died!" << std::endl;
}