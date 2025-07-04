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

        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        std::string getType()const;
        void setType(std::string type);

        virtual void makeSound() const;
};

#endif