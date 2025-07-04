#include "ClapTrap.hpp"
#include "Scavtrap.hpp"


Scavtrap::Scavtrap() : _defmode(false)
{
    std::cout << "Scavtrap created!" << std::endl;
}

Scavtrap::~Scavtrap()
{
    std::cout << "Scavtrap destroyed" << std::endl;
}

Scavtrap::Scavtrap(std::string name) : Claptrap(name) , _defmode(false)
{
    std::cout << "Scavtrap " << this->_name 
              << " was created" << std::endl;
    this->_energypoints = 50;
    this->_attackdamage = 20;
}

void Scavtrap::guardgate()
{
    if(this->_defmode == false)
    {
        setDefmode(true);
        std::cout << "Scavtrap is now on Gate keeper mode" << std::endl;
    }
    else
        std::cout << "Scavtrap is already on Gate keeper mode" << std::endl;
}

bool Scavtrap::getDefMode(void) const
{
    return this->_defmode;
}

void Scavtrap::setDefmode(bool)
{
    this->_defmode = true;
}

void Scavtrap::attack(const std::string& target)
{
    std::cout << "Scavtrap " << this->_name << "attacks" << target;
    Claptrap::attack(target);
}