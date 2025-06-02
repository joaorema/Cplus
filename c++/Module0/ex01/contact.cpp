/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:04:18 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/02 15:34:59 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "contact.hpp"

Contact::Contact( void )
{
   // std::cout << "Start Class Contact" << std::endl;
}

void Contact::teste( void )
{
    number+=1;
    std::cout << "Adding +1 to number: " << number <<  std::endl;
}

Contact::~Contact ( void )
{
   // std::cout << "Destroy Class Contact" << std::endl;
}