/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaorema <joaorema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:03:21 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/02 23:49:08 by joaorema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <string>

//file to create class (header)

class Contact
{
private :
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darkestsecret;
public :                           
    Contact ( void );                                  //constrcutor
    ~Contact ( void );                                 //destructor
    void setcontact(std::string f, std::string l, std::string n, std::string num, std::string s);      //ft to make contact
    std::string getfirstname() const ;
    std::string getlastname() const ;
    std::string getnickname() const ;
    std::string getnumber() const ;
    std::string getsecret() const ;
};
#endif 