/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:04:18 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/05 12:38:42 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"
#include <string>

Contact::Contact( void )
{
   // std::cout << "Start Class Contact" << std::endl;
}

Contact::~Contact ( void )
{
   // std::cout << "Destroy Class Contact" << std::endl;
}

void Contact::setcontact(std::string f, std::string l, std::string n, std::string num, std::string s)
{
   _firstname = f;
   _lastname = l;
   _nickname = n;
   _phonenumber = num;
   _darkestsecret = s;
}

std::string Contact::getfirstname() const
{
   return _firstname;
}

std::string Contact::getlastname() const
{
   return _lastname;
}
std::string Contact::getnickname() const
{
   return _nickname;
}
std::string Contact::getnumber() const
{
   return _phonenumber;
}
std::string Contact::getsecret() const
{
   return _darkestsecret;
}