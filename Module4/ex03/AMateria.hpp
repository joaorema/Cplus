#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria 
{
    protected:
        const std::string _type;
    public:
        //constructors 
         AMateria(std::string const & type);   //constructor with const type
        virtual ~AMateria();

        //Getter and setters
        std::string const & getType()const;   

        //copy and clone
        virtual AMateria* clone() const = 0;    //need to be redifined in cure & ice
        virtual void use(ICharacter& target);   //

};

#endif