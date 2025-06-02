/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaorema <joaorema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:41:15 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/03 00:31:09 by joaorema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include <string>
#include <iomanip>   // for std::setw

//file where we define what the contructor e destructor do in this object

std::string formatstring(const std::string& str)
{
    if(str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return std::string(10 - str.length(), ' ') + str;
}

Phonebook::Phonebook( void )
{
   index = 0;
   counter = 0;
}   
void Phonebook::addContact( void )
{
    std::string firstname, lastname , nickname, number, secret;
    std::cout << "First name: ";
    while (std::getline(std::cin, firstname) && firstname.empty())
        std::cout << "First name cannot be empty. Please enter again: ";

    std::cout << "Last name: ";
    while (std::getline(std::cin, lastname) && lastname.empty())
        std::cout << "Last name cannot be empty. Please enter again: ";

    std::cout << "Nickname: ";
    while (std::getline(std::cin, nickname) && nickname.empty())
        std::cout << "Nickname cannot be empty. Please enter again: ";

    std::cout << "Phone number: ";
    while (std::getline(std::cin, number) && number.empty())
        std::cout << "Phone number cannot be empty. Please enter again: ";

    std::cout << "Darkest secret: ";
    while (std::getline(std::cin, secret) && secret.empty())
        std::cout << "Darkest secret cannot be empty. Please enter again: ";

    contacts[index].setcontact(firstname, lastname, nickname, number, secret);
    index = (index + 1) % 8 ;                                                   // % 8 to be sure it keep between 0 and 7
    if(counter < 8)
        counter++;
}

void Phonebook::searchContact( void )
{
    if(counter == 0)
    {
        std::cout << "No contacts saved yet!" << std::endl;
        return;
    }
    std::cout << "---------------------------------------------\n";
    std::cout << "|   Index|First Name| Last Name|  Nickname|\n";
    std::cout << "---------------------------------------------\n";

    for(int i = 0; i < counter; i++)
    {
        std::cout << "|"
                  << std::setw(8) << i << "|"
                  << formatstring(contacts[i].getfirstname()) << "|"
                  << formatstring(contacts[i].getlastname()) << "|"
                  << formatstring(contacts[i].getnickname()) << "|\n";
                  
    }
    std::cout << "---------------------------------------------\n";
    std::cout << "Enter index for more details: ";
    std::string input;
    std::getline(std::cin, input);
    
    if(input.length() != 1 || !isdigit(input[0]))
    {
        std::cout << "Invalid Input!" << std::endl;
        return;
    }
    int i = input[0] - '0';
    if(i < 0 || i >= counter)
    {
        std::cout << "Index out of range!" << std::endl;
        return;
    }
    std::cout << "First name: " << contacts[i].getfirstname() << std::endl;
    std::cout << "Last name: " << contacts[i].getlastname() << std::endl;
    std::cout << "Nickname: " << contacts[i].getnickname() << std::endl;
    std::cout << "Phonenubmer: " << contacts[i].getnumber() << std::endl;
    std::cout << "Darkest secret: " << contacts[i].getsecret() << std::endl;       
}

Phonebook::~Phonebook ( void )
{
   // std::cout << "Destuctor test" << std::endl;
}