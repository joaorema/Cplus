#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:

    public:
        WrongCat();
        ~WrongCat();

        std::string getType()const;

        void makeSound()const;   //only acessible if wrongcat not ptr or reference to main class
};

#endif