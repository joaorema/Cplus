/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:39:29 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/02 16:28:34 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "contact.hpp"

//file to create class (header)

class Phonebook
{
private :
    Contact contacts[8];
    int index;
public : 
    Phonebook ( void );                                  //constrcutor
    ~Phonebook ( void );                                 //destructor
    void addContact();
    void searchContact();
};
#endif 