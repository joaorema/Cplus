/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:47:07 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/03 16:48:12 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.hpp"
#include "contact.hpp"
#include <csignal>
#include <iomanip> 

int main ()
{
    signal(SIGINT, SIG_IGN);
    signal(SIGQUIT, SIG_IGN);
    Phonebook phonebook;
    std::string text;
    std::cout << "Welcome to Phonebook" << std::endl;
    std::cout << "Type a command to start (ADD, SEARCH, EXIT)" << std::endl;
    
    while(true)
    {
        std::cout << ">"; 
        if(!std::getline(std::cin, text))
        {
            std::cout << "Leaving Program" << std::endl;
            return 0;
        }
        if(text == "ADD")
            phonebook.addContact();
        else if(text == "SEARCH")
            phonebook.searchContact();
        else if(text == "EXIT")
        {
            std::cout << "Leaving" << std::endl;
            return 0;
        }
        else
            std::cout << "Not a valid command. Try again" << std::endl;      
    }
    return 0;  
}