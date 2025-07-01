#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        
    public:
        Cat();
        Cat(std::string type);
        ~Cat();
        virtual void makeSound()const ;

};

#endif