/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:03:21 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/03 11:05:00 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <string>

class Contact
{
    private :
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _phonenumber;
        std::string _darkestsecret;
    public :                           
        Contact ( void );                                                                                   //constrcutor
        ~Contact ( void );                                                                                  //destructor
        void setcontact(std::string f, std::string l, std::string n, std::string num, std::string s);       //ft to make contact
        std::string getfirstname() const ;                                                                  //used to get firstname
        std::string getlastname() const ;                                                                   //used to get lastname
        std::string getnickname() const ;                                                                   //used to get nickname
        std::string getnumber() const ;                                                                     //used to get phone number
        std::string getsecret() const ;                                                                     //used to get darkest secret
};

#endif 