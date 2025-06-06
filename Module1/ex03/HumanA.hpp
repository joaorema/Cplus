/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:11:34 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 11:55:43 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;                               //Name of human
        Weapon& _weapon;                                 //weapon for humanA
    public:
        HumanA(std::string name, Weapon& weapon);       //humana contructor defines name and weapon                                   
        ~HumanA(void);                                  //destructor
        void attack();                                  //Attack fuction
};

#endif