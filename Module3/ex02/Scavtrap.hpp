#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class Scavtrap : public Claptrap
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
        virtual void attack(const std::string& target);
        virtual void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);
        

};

#endif