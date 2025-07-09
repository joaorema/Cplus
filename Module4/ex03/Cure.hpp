#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
    //constructor
        Cure();
        virtual ~Cure();

    //other fts
        AMateria* clone()const;
        void use(ICharacter& target);
};

#endif