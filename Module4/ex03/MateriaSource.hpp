#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include <iostream>
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _templates[4];
    public:
    //constructors
        MateriaSource();
        ~MateriaSource();

    //copy and operator overload
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);

    //other fts
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);

};

#endif