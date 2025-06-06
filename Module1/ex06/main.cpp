/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:25:37 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 15:49:58 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>


void Print(Harl Peter, std::string level)
{
    std::cout << "[" << level << "]" << std::endl;
    Peter.complain(level);
    std::cout << std::endl;
}

int main(int ac, char *av[])
{
    if (ac != 2)                                                                    //only works with 1 argument
    {
        std::cerr << "Error. Program does not accept arguments!" << std::endl;
        return -1;
    }
    std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};                   //array for lvls
    int lvl = 4;
    for(int i = 0; i < 4; i++)                                                      //check if argument passed is valid lvl     
    {
        if(av[1] == array[i])
        {
            lvl = i;
            break;
        }
    }
    Harl Peter;
    switch(lvl)                                                                       //check value of lvl and returns the specific case or just default if none found
    {
        case 0:
            Print(Peter, "DEBUG");
        case 1:
            Print(Peter, "INFO");
        case 2:
            Print(Peter, "WARNING");
        case 3:
            Print(Peter, "ERROR");
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    
}