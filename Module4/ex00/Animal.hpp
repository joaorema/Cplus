#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>



//primary class 
//abstract >= 1 virtual fuction
class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();

        std::string getType()const;
        void setType(std::string type);

        virtual void makeSound() const;
};

#endif