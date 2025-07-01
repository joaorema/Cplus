#include "ClapTrap.hpp"

//constructor & destructor
Claptrap::Claptrap() : _hitpoints(10), _energypoints(10), _attackdamage(0)
{
    std::cout << "Claptrap was created" << std::endl;
}

Claptrap::Claptrap(std::string name) : _hitpoints(10), _energypoints(10), _attackdamage(0)
{
    this->_name = name;
    std::cout << "Claptrap " << this->_name 
              << " was created" << std::endl;
}

Claptrap::~Claptrap()
{
    std::cout << "Destroying claptrap" << std::endl;
}

Claptrap::Claptrap(const Claptrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

//getters and setters

int Claptrap::getHitPoints(void) const
{
    return this->_hitpoints;
}

int Claptrap::getEnergyPoints(void) const
{
    return this->_energypoints;
}

int Claptrap::getAttackDamage(void) const
{
    return this->_attackdamage;
}

std::string Claptrap::getName(void) const
{
    return this->_name;
}

void Claptrap::setName(std::string name)
{
    this->_name = name;
}

void Claptrap::setHitPoints(int const nbr)
{
    this->_hitpoints = nbr;
}

void Claptrap::setEnergyPoints(int const nbr)
{
    this->_energypoints = nbr;
}

void Claptrap::setAttackdamage(int const nbr)
{
    this->_attackdamage = nbr;
}

//other fts

void Claptrap::attack(const std::string& target)
{   
    if(this->_energypoints > 0)
    {
        std::cout << "Claptrap " << this->_name 
                  << " attacks " << target 
                  << " causing " << this->_attackdamage 
                  << " points of damage" << std::endl;
        this->_energypoints = this->_energypoints - 1;
    }
    else
        std::cout << "Claptrap can't attack . It has no more energy points" << std::endl;
}

void Claptrap::takeDamage(unsigned int amount)
{
    if(this->_energypoints > 0)
    {
        std::cout << "Claptrap " << this->_name 
                  << " suffers " << amount 
                  << " damage" << std::endl;
        this->_hitpoints -= amount;
    }
    else
        std::cout << "The claptrap attacked is already hat 0 Hit points" << std::endl;

}

void Claptrap::beRepaired(unsigned int amount)
{
    if(this->_energypoints > 0 && this->_hitpoints > 0 && this->_hitpoints < 100)
    {
        std::cout << "Claptrap " << this->_name 
                  << " restored " << amount 
                  << " Hitpoints" << std::endl;
        this->_energypoints = this->_energypoints - 1;
        this->_hitpoints += amount;
    }
    else if (this->_hitpoints == 100)
        std::cout << "Can't repair. " << _name << " still has all of his hitpoints" << std::endl;
    else
        std::cout << "Claptrap can't be repeaired . It has no more energy points" << std::endl;
}