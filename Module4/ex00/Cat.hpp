#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:

    public:
        Cat();
        ~Cat();

        std::string getType()const;
        void setType(std::string type);

        virtual void makeSound() const;
};


#endif