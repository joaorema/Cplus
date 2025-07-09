#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

//interface class (If you want to be a character, you must implement these functions)
class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {};
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif