#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include <iostream>
//#include "AMateria.hpp"

//interface class (If you want to be a character, you must implement these functions)
class AMateria;

class ICharacter
{
    public:
    //constructors
        virtual ~ICharacter() {};

    //getters & setters
        virtual std::string const & getName()const = 0;

    //other fts     
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;    

};

#endif