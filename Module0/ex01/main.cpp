/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:47:07 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/02 15:34:43 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"

int main ()
{
    Contact start;
    
    start.number = 42;
    std::cout << "Test number: " << start.number << std::endl;
    start.teste();
    return 0;
}