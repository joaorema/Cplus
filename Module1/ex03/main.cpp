/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpedro-c <joaopcrema@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:09:11 by Jpedro-c          #+#    #+#             */
/*   Updated: 2025/06/06 12:23:27 by Jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
        std::cout << "" << std::endl;
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
        std::cout << "" << std::endl;
    }
    {
        Weapon axe = Weapon("Big Black Axe");
        HumanB John("John");
        John.attack();
        John.setWeapon(axe);
        std::cout << "John found a weapon" << std::endl;
        John.attack();
    }
return 0;
}
