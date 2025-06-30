/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:44:47 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/05 12:37:22 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>


int main()
{
    int N = 5;

    Zombie *ZombieHorde = zombieHorde(N , "Big Pack of Zombies!");
    std::cout << "Setting Zombies names:" << std::endl;
    ZombieHorde[0].setName("Joao");
    ZombieHorde[0].annouce();
    ZombieHorde[1].setName("Antonio");
    ZombieHorde[1].annouce();
    ZombieHorde[2].setName("Miguel");
    ZombieHorde[2].annouce();
    ZombieHorde[3].setName("Tiago");
    ZombieHorde[3].annouce();
    ZombieHorde[4].setName("Chico");
    ZombieHorde[4].annouce();
    
    delete[]ZombieHorde;
    return (0);
}