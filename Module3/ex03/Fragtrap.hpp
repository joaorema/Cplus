#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "Scavtrap.hpp"
#include <iostream>
#include <string>


class Fragtrap : virtual public Claptrap
{
    private:

    public:
        Fragtrap();
        Fragtrap(std::string name);
        ~Fragtrap();
        
        void highFiveGuys(void);

};

#endif