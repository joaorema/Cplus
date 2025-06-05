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

    Zombie *ZombieHorde = zombieHorde(N , "John's Zombie's");

    delete[]ZombieHorde;
    return (0);
}