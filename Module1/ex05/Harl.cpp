/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:07:43 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 14:46:30 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>
#include <map>


//constructor & destructor

Harl::Harl(void) {}

Harl::~Harl(void) {}

//fuctions

void Harl::complain(std::string level)
{
    std::map<std::string, void (Harl::*)(void)>levelMap;              //we create a map to acess the private fuctions with ptrs*
    levelMap["DEBUG"] = &Harl::debug;
    levelMap["INFO"] = &Harl::info;
    levelMap["WARNING"] = &Harl::warning;
    levelMap["ERROR"] = &Harl::error;
    
    if(levelMap.find(level) != levelMap.end())                          //will check if the lvl passed exists in our maps
    {
        (this->*levelMap[level])();
    }
    else
        std::cout << "Invalid level: " << level << std::endl;
    
    
}

//private fuctions

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month" << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}