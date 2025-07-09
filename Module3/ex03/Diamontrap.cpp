#include "ClapTrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"
#include "Diamontrap.hpp"


Diamontrap::Diamontrap()
{
    //std::cout << "Created a Diamontrap" << std::endl;
}

Diamontrap::Diamontrap(std::string name) : Claptrap(name + "_clap_name"), Fragtrap(name + "_clap_name"), Scavtrap(name + "_clap_name"), _name(name)
{
    std::cout << "Created Diamontrap with name " << name << std::endl;
    _hitpoints = Fragtrap::_hitpoints;
    _energypoints = Scavtrap::_energypoints;
    _attackdamage = Fragtrap::_attackdamage;
    
}

Diamontrap::~Diamontrap()
{
    std::cout << "Diamontrap destroyed" << std::endl;
}

void Diamontrap::whoAmI()
{
    std::cout << "Diamontrap name " << _name << std::endl;
    std::cout << "Claptrap name " << Claptrap::_name << std::endl;
}

void Diamontrap::attack(const std::string& target)
{
    Scavtrap::attack(target);
}

std::string Diamontrap::getName(void) const
{
    return this->_name;
}

void Diamontrap::takeDamage(unsigned int amount)
{
    if(this->_energypoints > 0)
    {
        std::cout << "Diamontrap " << this->_name 
                  << " suffers " << amount 
                  << " damage" << std::endl;
        this->_hitpoints -= amount;
    }
    else
        std::cout << "The Diamontrap attacked is already hat 0 Hit points" << std::endl;

}

void Diamontrap::beRepaired(unsigned int amount)
{
    if(this->_energypoints > 0 && this->_hitpoints > 0 && this->_hitpoints < 100)
    {
        std::cout << "Diamontrap " << this->_name 
                  << " restored " << amount 
                  << " Hitpoints" << std::endl;
        this->_energypoints = this->_energypoints - 1;
        this->_hitpoints += amount;
    }
    else if (this->_hitpoints == 100)
        std::cout << "Can't repair. " << _name << " still has all of his hitpoints" << std::endl;
    else
        std::cout << "Diamontrap can't be repeaired . It has no more energy points" << std::endl;
}