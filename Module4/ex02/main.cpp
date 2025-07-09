#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"      
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{   
    
    Animal* animals[100];
    
    //New test to prove Animal class can't be instantiate except on ptr
    //Uncomment the following : 
    //Animal teste;

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
    
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Test to show deep copy" << std::endl;
    std::cout << "Creating 2 new dogs" << std::endl;
    Dog one;
    Dog two;
    
    std::cout << "Setting ideia on dog 1" << std::endl;
    one.setIdea(42, "Dig hole");
    std::cout << "Copying. Dog 2 = Dog 1" << std::endl;
    two = one; // Copy assignment
    
    std::cout << "Dog one idea: " << one.getIdea(42) << std::endl;
    std::cout << "Dog two idea: " << two.getIdea(42) << std::endl;

    std::cout << "Changing ideia on dog 2" << std::endl;
    two.setIdea(42, "Chase cat");

    std::cout << "After modifying Dog 2:" << std::endl;
    std::cout << "Dog one idea: " << one.getIdea(42) << std::endl;
    std::cout << "Dog two idea: " << two.getIdea(42) << std::endl;

    std::cout << "----------------------------------------------" << std::endl;
    
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