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

void Fragtrap::attack(const std::string& target)
{
    if(this->_energypoints > 0)
    {
        std::cout << "Fragtrap " << this->_name 
                  << " attacks " << target 
                  << " causing " << this->_attackdamage 
                  << " points of damage" << std::endl;
        this->_energypoints = this->_energypoints - 1;
    }
    else
        std::cout << "Fragtrap can't attack . It has no more energy points" << std::endl;
}

void Fragtrap::takeDamage(unsigned int amount)
{
    if(this->_energypoints > 0)
    {
        std::cout << "Fragtrap " << this->_name 
                  << " suffers " << amount 
                  << " damage" << std::endl;
        this->_hitpoints -= amount;
    }
    else
        std::cout << "The Fragtrap attacked is already at 0 Hit points" << std::endl;

}

void Fragtrap::beRepaired(unsigned int amount)
{
    if(this->_energypoints > 0 && this->_hitpoints > 0 && this->_hitpoints < 100)
    {
        std::cout << "Fragtrap " << this->_name 
                  << " restored " << amount 
                  << " Hitpoints" << std::endl;
        this->_energypoints = this->_energypoints - 1;
        this->_hitpoints += amount;
    }
    else if (this->_hitpoints == 100)
        std::cout << "Can't repair. " << _name << " still has all of his hitpoints" << std::endl;
    else
        std::cout << "Fragtrap can't be repeaired . It has no more energy points" << std::endl;
}