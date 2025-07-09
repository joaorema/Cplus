#ifndef EXECUTE_HPP
#define EXECUTE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Execute : public AMateria
{
    private:

    public:
    //constructor
        Execute();
        virtual ~Execute();
    
    //other fts:
        AMateria* clone() const;   //returns a clone of the materia
        void use(ICharacter& target);
 
};

#endif