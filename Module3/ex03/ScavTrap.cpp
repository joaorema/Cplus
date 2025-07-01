#include "ClapTrap.hpp"
#include "Scavtrap.hpp"


Scavtrap::Scavtrap() : _defmode(false)
{
    //std::cout << "Scavtrap created!" << std::endl;
}

Scavtrap::~Scavtrap()
{
    std::cout << "Scavtrap destroyed" << std::endl;
}

Scavtrap::Scavtrap(std::string name) : _defmode(false)
{
    this->_name = name;
    std::cout << "Scavtrap " << name
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
       
    if(this->_energypoints > 0)
    {
        std::cout << this->getName()
                  << " attacks " << target 
                  << " causing " << this->_attackdamage 
                  << " points of damage" << std::endl;
        this->_energypoints = this->_energypoints - 1;
    }
    else
        std::cout << "Scavtrap can't attack . It has no more energy points" << std::endl;
}