#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
    private:

    public:
    //constructor
        Ice();
        virtual ~Ice();
    
    //other fts:
        AMateria* clone() const;   //returns a clone of the materia
        void use(ICharacter& target);
 
};

#endif