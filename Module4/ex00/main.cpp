#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"      
#include "WrongCat.hpp"

int main()
{
    const Animal* one = new Animal();
    const Animal* two = new Cat();
    const Animal* three = new Dog();
    const WrongAnimal* four = new WrongAnimal();
    const WrongAnimal* five = new WrongCat();

    Animal a;
    Cat b;
    Dog c;
    WrongAnimal d;
    WrongCat e;

    std::cout << "lets check if types of ptrs are correct" << std::endl;
    std::cout << "One type : " << one->getType() << std::endl;
    std::cout << "Two type : " << two->getType() << std::endl;
    std::cout << "Three type : " << three->getType() << std::endl;    

    std::cout << "lets check if types in normal are correct" << std::endl;
    std::cout << "A type : " << a.getType() << std::endl;
    std::cout << "B type : " << b.getType() << std::endl;
    std::cout << "C type : " << c.getType() << std::endl;

    std::cout << "lets now check makesound for ptr" << std::endl;
    one->makeSound();
    two->makeSound();
    three->makeSound();

    std::cout << "lets now check makesound for normal" << std::endl;
    a.makeSound();
    b.makeSound();
    c.makeSound();

    std::cout << "lets now do the final tests the project asks for" << std::endl;
    std::cout << "calling makesound on ptr WrongAnimal and Wrong cat" << std::endl;
    four->makeSound();
    five->makeSound();

    std::cout << "calling makesound on normal WrongAnimal and Wrong cat" << std::endl;
    d.makeSound();
    e.makeSound();

    delete(one);
    delete(two);
    delete(three);
    delete(four);
    delete(five);
}