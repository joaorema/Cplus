/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:11:59 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 11:55:40 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon* _weapon;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void setWeapon(Weapon& weapon);
        void attack();
};  

#endif