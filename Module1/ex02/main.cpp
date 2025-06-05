/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:48:32 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/05 12:59:51 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string variable ="HI THIS IS BRAIN!";                               //String variable
    
    std::string* stringPTR = &variable;                                      //ptr to string
    std::string& stringREF = variable;                                       //ref to string

    std::cout << "Address of Variable: " << &variable << std::endl;          //Memory address from variable  &     
    std::cout << "Address of stringPTR: " << stringPTR << std::endl;         //Memory address from stringptr 
    std::cout << "Address of stringREF: " << &stringREF << std::endl;        //Memory address from stringref &   

    std::cout << "Value of variable is: " << variable << std::endl;          //no need to & or *
    std::cout << "Value of stringPTR is: " << *stringPTR << std::endl;       //to reach value need to pass ptr
    std::cout << "Value of stringREF is: " << stringREF << std::endl;        //no need to & or *
}