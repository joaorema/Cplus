#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        ~Dog();

        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        std::string getType()const;
        void setType(std::string type);

        virtual void makeSound() const;
};

#endif