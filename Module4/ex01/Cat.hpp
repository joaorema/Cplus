#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain;
    public:
        Cat();
        ~Cat();

        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        
        std::string getType()const;
        void setType(std::string type);

        virtual void makeSound() const;
};


#endif