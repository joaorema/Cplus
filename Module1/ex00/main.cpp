/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:18:04 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/05 11:39:51 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
    Zombie *OneZombie;                     //Start the class
    Zombie *PtrZombie;

    OneZombie = newZombie("John");         //used newZombie to create 1 zombie with spec name
    OneZombie->annouce();                  //announce "brainzzzz!!!"
    
    PtrZombie = newZombie("Ana");
    
    randomChump("Anisa");
    randomChump("Miguel");

    delete(OneZombie);
    delete(PtrZombie);
    return 0;
}