/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:25:35 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 15:32:54 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

//constructor & destructor

Harl::Harl(void) {}

Harl::~Harl(void) {}

//private fuctions

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
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

//fuctions

void Harl::complain(std::string level)
{
    const std::string levels[4] = {"DEBUG" , "INFO", "WARNING", "ERROR"};                           //create and array of lvls
    void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};    //array of corresponding fuction pointers

    for(int i = 0; i < 4; i++)
    {
        if(levels[i] == level)
        {
            (this->*functions[i])();
            return ;
        }
    }
    std::cout << "Invalid level " << level << std::endl;
    
}