#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class Scavtrap : virtual public Claptrap
{
    private:
        bool _defmode;
    public :
        Scavtrap();
        Scavtrap(std::string name);
        ~Scavtrap();
        void guardgate();
        bool getDefMode(void) const;
        void setDefmode(bool);
        void attack(const std::string& target); //used to attack a target
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        

};

#endif