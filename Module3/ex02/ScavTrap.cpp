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
    if(this->_energypoints > 0)
    {
        std::cout << "Scavtrap " << this->_name 
                  << " attacks " << target 
                  << " causing " << this->_attackdamage 
                  << " points of damage" << std::endl;
        this->_energypoints = this->_energypoints - 1;
    }
    else
        std::cout << "Scavtrap can't attack . It has no more energy points" << std::endl;
}

void Scavtrap::takeDamage(unsigned int amount)
{
    if(this->_energypoints > 0)
    {
        std::cout << "Scavtrap " << this->_name 
                  << " suffers " << amount 
                  << " damage" << std::endl;
        this->_hitpoints -= amount;
    }
    else
        std::cout << "The Scavtrap attacked is already hat 0 Hit points" << std::endl;

}

void Scavtrap::beRepaired(unsigned int amount)
{
    if(this->_energypoints > 0 && this->_hitpoints > 0 && this->_hitpoints < 100)
    {
        std::cout << "Scavtrap " << this->_name 
                  << " restored " << amount 
                  << " Hitpoints" << std::endl;
        this->_energypoints = this->_energypoints - 1;
        this->_hitpoints += amount;
    }
    else if (this->_hitpoints == 100)
        std::cout << "Can't repair. " << _name << " still has all of his hitpoints" << std::endl;
    else
        std::cout << "Scavtrap can't be repeaired . It has no more energy points" << std::endl;
}