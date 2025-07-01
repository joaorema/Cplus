#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"      
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{   
    Animal* animals[100];
    
    std::cout << "Creating array of Animals" << std::endl;
    std::cout << "Creating 50 cats" << std::endl;
    for(int i = 0; i < 50; i++)
    {
        animals[i] = new Cat();
    }
    std::cout << "Creating 50 dogs" << std::endl;
    for(int i = 50; i < 100; i++)
    {
        animals[i] = new Dog();
    }
    std::cout << "Starting to delete array" << std::endl;
    std::cout << "Destroying 50 cats" << std::endl;
    for(int i = 0; i < 50; i++)
    {
        delete(animals[i]);
    }
    std::cout << "Destroying 50 dogs" << std::endl;
    for(int i = 50; i < 100; i++)
    {
        delete(animals[i]);
    }
}