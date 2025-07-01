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