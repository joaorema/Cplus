#include "Fragtrap.hpp"
#include "ClapTrap.hpp"
#include "Scavtrap.hpp"


Fragtrap::Fragtrap()
{
    //std::cout << "Fragtrap created" << std::endl;
}

Fragtrap::Fragtrap(std::string name)
{
    this->_name = name;
    std::cout << "Fragtrap named " << name << " was created" << std::endl;
    this->_energypoints = 100;
    this->_attackdamage = 30;
}

Fragtrap::~Fragtrap()
{
    std::cout << "Fragtrap destroyed" << std::endl;
}

void Fragtrap::highFiveGuys(void)
{
    std::cout << _name << " wants to High Five" << std::endl;
}