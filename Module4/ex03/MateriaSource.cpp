#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        _templates[i] = 0;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
        delete(_templates[i]);
}

MateriaSource::MateriaSource(const MateriaSource& other) 
{
    for(int i = 0; i < 4; i++)
    {
        if(other._templates[i])
            _templates[i] = other._templates[i]->clone();
        else
            _templates[i] = 0;    
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if(this == &other)
        return *this;

    //delete current templates
    for (int i = 0; i < 4; i++)
    {
        delete(_templates[i]);
        _templates[i] = 0;
    }

    //deep copy
    for(int i = 0; i < 4; i++)
    {
        if (other._templates[i])
            _templates[i] = other._templates[i]->clone();
        else
            _templates[i] = 0;
    }
    return *this;  
}

void MateriaSource::learnMateria(AMateria* m)
{
    if(!m)
        return;
    
    for(int i = 0; i < 4; i++)
    {
        if(_templates[i] == 0)
        {
            _templates[i] = m->clone();
            return;
        }
    }
    std::cout << "Cannot learn more materias" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{  
    for(int i = 0; i < 4; i++)
    {
        if(_templates[i] && _templates[i]->getType() == type)
        {
            return _templates[i]->clone();
        }
    }
    std::cout << "Type not found" << std::endl;
    return 0; 
}