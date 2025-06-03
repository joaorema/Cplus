/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:39:29 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/03 12:30:49 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "contact.hpp"
#include <string>

class Phonebook
{
    private :
        Contact contacts[8];                                 //max contacts 8
        int index;                                           //index to decided what contact to get extra info
        int counter;                                         //max counter (8)
    public : 
        Phonebook ( void );                                  //constrcutor
        ~Phonebook ( void );                                 //destructor
        void addContact();                                   //add contact
        void searchContact();                                //search contact
};
#endif