/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:47:07 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/02 16:14:32 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.hpp"
#include "contact.hpp"

int main ()
{
    std::string text;
    std::cout << "Welcome to Phonebook" << std::endl;
    std::cout << "Type a command to start (ADD, SEARCH, EXIT)" << std::endl;
    
    while(true)
    {
        std::cout << ">"; 
        std::getline(std::cin, text);
        if(text == "ADD" || text == "add")
            std::cout << "Add mode" << std::endl;
        else if(text == "SEARCH" || text == "search")
            std::cout << "Search mode" << std::endl;
        else if(text == "EXIT" || text == "exit")
        {
            std::cout << "Leaving" << std::endl;
            break;
        }
        else
            std::cout << "Not a valid command. Try again" << std::endl;      
    }
    return 0;  
}