/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:44:54 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/05 12:34:08 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>


Zombie *zombieHorde(int N, std::string name)
{
    if(N <= 0)                          //if want to create 0 or less than that
        return NULL;
    
    Zombie *horde = new Zombie[N];      //Create horde with class zombie              
    for(int i = 0; i < N; i++)
    {
        horde[i].setName(name);         //set the name
        horde[i].annouce();             //annouce
    }
    return horde;
}