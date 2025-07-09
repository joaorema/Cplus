#ifndef DIAMONTRAP_HPP
# define DIAMONTRAP_HPP 

#include "ClapTrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"

class Diamontrap : public Fragtrap , public Scavtrap
{
    private:
        std::string _name;
    public:
        Diamontrap();
        Diamontrap(std::string name);
        ~Diamontrap();
        void whoAmI();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void) const;


};

#endif