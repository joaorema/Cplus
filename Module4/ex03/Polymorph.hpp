#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Polymorph : public AMateria
{
    private:

    public:
    //constructor
        Polymorph();
        virtual ~Polymorph();
    
    //other fts:
        AMateria* clone() const;   //returns a clone of the materia
        void use(ICharacter& target);
 
};

#endif