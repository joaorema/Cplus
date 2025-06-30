/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 10:46:03 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/05 11:42:01 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
    private :
        std::string _name;
    public :
        Zombie (void);                                      //constructor
        ~Zombie (void);                                     //destructor
        Zombie(std::string name);                           //creates zombie with name
        void announce ();                                    //announce
};

Zombie *newZombie(std::string name);                        //crates newzombie with name and returns it(on file newzombie)
void randomChump(std::string name);                         //creates zombie and announces(on file randomchump)

#endif