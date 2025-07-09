#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(const std::string name) : _name(name)
{
    //std::cout << "Created a Character called " << name << std::endl;
    for(int i = 0; i < 4; i++)
        _inventory[i] = 0;
} 

Character::~Character()
{
    //std::cout << "Destroyed Character" << std::endl;
    for(int i = 0; i < 4; i++)
        delete(_inventory[i]);
}

Character::Character(const Character& other) : _name(other._name) //for deep copy check inventory and return 0 if nothing
{
    for(int i = 0; i < 4; i++)
    {
        if(other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = 0;
    }
}

Character& Character::operator=(const Character& other)
{
    if(this == &other)
        return *this;
    _name = other._name; 

    //delete current inventory
    for (int i = 0; i < 4; i++)
    {
        delete(_inventory[i]);
        _inventory[i] = 0;
    }

    //deep copy
    for(int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = 0;
    }
    return *this;
}

std::string const & Character::getName()const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    if(!m)
        return;
    for(int i = 0; i < 4; i++)
    {
        if(_inventory[i] == 0)
        {
            _inventory[i] = m;
            return;
        }
    }
    std::cout << "Inventory full" << std::endl;

}

void Character::unequip(int idx)
{
    if(idx < 0 || idx >= 4)
    {
        std::cout << "Invalid Idx" << std::endl;
        return ;
    }
    _inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if(idx < 0 || idx >= 4 || !_inventory[idx])
        return;
    _inventory[idx]->use(target);
}

