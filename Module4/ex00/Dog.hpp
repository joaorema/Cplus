#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
        
    public:
        Dog();
        Dog(std::string type);
        ~Dog();
        virtual void makeSound() const ;
};

#endif