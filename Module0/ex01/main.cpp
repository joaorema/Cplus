/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:47:07 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/03 11:03:07 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.hpp"
#include "contact.hpp"

int main ()
{
    Phonebook phonebook;
    std::string text;
    std::cout << "Welcome to Phonebook" << std::endl;
    std::cout << "Type a command to start (ADD, SEARCH, EXIT)" << std::endl;
    
    while(true)
    {
        std::cout << ">"; 
        std::getline(std::cin, text);
        if(text == "ADD")
            phonebook.addContact();
        else if(text == "SEARCH")
            phonebook.searchContact();
        else if(text == "EXIT")
        {
            std::cout << "Leaving" << std::endl;
            break;
        }
        else
            std::cout << "Not a valid command. Try again" << std::endl;      
    }
    return 0;  
}