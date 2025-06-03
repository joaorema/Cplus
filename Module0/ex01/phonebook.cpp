/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:41:15 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/03 16:54:40 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include <string>
#include <iomanip>                                                                      // for std::setw

#define CHECK_EOF(str) if (!std::cin) {return;}


std::string formatstring(const std::string& str)                                        //formats the text to project specs
{
    if(str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return std::string(10 - str.length(), ' ') + str;
}

bool isAllDigits(const std::string& str) 
{
    for (std::string::size_type i = 0; i < str.length(); ++i) 
    {
        if (!std::isdigit(static_cast<unsigned char>(str[i])))
            return false;
    }
    return true;
}

Phonebook::Phonebook( void )                                                            //constructor to start values at 0
{
   index = 0;
   counter = 0;
}   
void Phonebook::addContact( void )
{
    std::string firstname, lastname , nickname, number, secret;
    std::cout << "First name: ";
    while (std::getline(std::cin, firstname) && firstname.empty())                      //while empty prompt again
        std::cout << "First name cannot be empty. Please enter again: ";
    CHECK_EOF(firstname);

    std::cout << "Last name: ";
    while (std::getline(std::cin, lastname) && lastname.empty())
        std::cout << "Last name cannot be empty. Please enter again: ";
    CHECK_EOF(lastname);
    
    std::cout << "Nickname: ";
    while (std::getline(std::cin, nickname) && nickname.empty())
        std::cout << "Nickname cannot be empty. Please enter again: ";
    CHECK_EOF(nickname);
    
    std::cout << "Phone number: ";
    while (std::getline(std::cin, number) && (number.empty() || !isAllDigits(number)))
        std::cout << "Phone number needs to be a digit and cannot be empty. Please enter again: ";
    CHECK_EOF(number);
    
    std::cout << "Darkest secret: ";
    while (std::getline(std::cin, secret) && secret.empty())
        std::cout << "Darkest secret cannot be empty. Please enter again: ";
    CHECK_EOF(secret);
    contacts[index].setcontact(firstname, lastname, nickname, number, secret);
    index = (index + 1) % 8 ;                                                           // % 8 to be sure it keep between 0 and 7 when at max replaces oldest one
    if(counter < 8)
        counter++;
}

void Phonebook::searchContact( void )
{
    if(counter == 0)                                                                    //if no contacts 
    {
        std::cout << "No contacts saved yet!" << std::endl;
        return;
    }
    std::cout << "---------------------------------------------\n";
    std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
    std::cout << "---------------------------------------------\n";

    for(int i = 0; i < counter; i++)                                                    //print available contacts on phonebook
    {
        std::cout << "|"
                  << std::setw(10) << i << "|"                                          //set colums to 10chars wide
                  << formatstring(contacts[i].getfirstname()) << "|"
                  << formatstring(contacts[i].getlastname()) << "|"
                  << formatstring(contacts[i].getnickname()) << "|\n";
                  
    }
    std::cout << "---------------------------------------------\n";
    std::cout << "Enter index for more details: ";
    std::string input;
    std::getline(std::cin, input);
    
    if(input.length() != 1 || !isdigit(input[0]))                                       //if index not number or with len !=1
    {
        std::cout << "Invalid Input!" << std::endl;
        return;
    }
    int i = input[0] - '0';                                                             //if input = 5 // 53-48 = 5                                              
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
   
}

