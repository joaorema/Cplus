#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"


class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria* _inventory[4];

    public:
    //constructor
        Character(const std::string name);
        virtual ~Character();

    //copy and deep copy 
        Character(const Character& other);
        Character& operator=(const Character& other);

    //getters & setters
        std::string const & getName() const;

    //other fts
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif