/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:11:25 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/02 14:22:14 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>                                        //for cout and cin 
#include <string>                                          //to works with strings
#include <cctype>                                          //for toupper (capitalize ft)

int main (int ac, char *av[])
{
    if(ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;    
    }
    std::string input;                                     //create input object
    for (int i = 1; i < ac; i++)                           // put all arguments into input
    {
        input+=av[i];
        if(i < ac -1)                                      //after each word puts a space (just avoid putting on last one)
            input += " "; 
    }
    for (char& myChar : input)                             //create var mychar pointed to input
        myChar = std::toupper(myChar);                     //pass every char in input in ft toupper
    std::cout << input << std::endl;
}

