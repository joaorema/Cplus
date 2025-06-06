/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:10:16 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 11:55:42 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
    private:
        std::string _type;                                   // Private attribute to store the weapon's type
    public: 
        Weapon(std::string weaponType);                     // Constructor to initialize the weapon type
        ~Weapon(void);                                      // Destructor
        const std::string& getType() const;                 // Returns a constant reference to type
        void setType(std::string weponType);                // Sets type using new value passed as a parameter
};

#endif