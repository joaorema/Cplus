/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:52:03 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/04 18:26:46 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>


int main()
{
    Zombie *PtrZombie;
    PtrZombie = newZombie("John ");
    PtrZombie->announce();
    
    Zombie *Zombie;
    Zombie = newZombie("Isa ");
    Zombie->announce();
    randomChump("Luis ");
    randomChump("Antonio ");
    
    delete PtrZombie;
    delete Zombie;
    return 0;

}