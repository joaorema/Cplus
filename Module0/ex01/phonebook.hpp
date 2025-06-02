/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaorema <joaorema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:39:29 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/02 23:52:27 by joaorema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "contact.hpp"
#include <string>

//file to create class (header)

class Phonebook
{
private :
    Contact contacts[8];
    int index;
    int counter;
public : 
    Phonebook ( void );                                  //constrcutor
    ~Phonebook ( void );                                 //destructor
    void addContact();
    void searchContact();
};
#endif 