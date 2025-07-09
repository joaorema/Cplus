#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "Scavtrap.hpp"
#include <iostream>
#include <string>


class Fragtrap : public Claptrap
{
    private:

    public:
        Fragtrap();
        Fragtrap(std::string name);
        ~Fragtrap();

        virtual void attack(const std::string& target);
        void highFiveGuys(void);
        virtual void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);

};

#endif