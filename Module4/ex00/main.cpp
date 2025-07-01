#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal* meta = new Animal();
    const WrongAnimal* beta = new WrongCat();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    WrongAnimal a;
    WrongCat b;


    std::cout << a.getType() << std::endl; // "WrongAnimal"
    std::cout << b.getType() << std::endl; // "WrongCat"
    std::cout << meta->getType() << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    a.makeSound();
    b.makeSound();
    meta->makeSound();
    j->makeSound();
    i->makeSound();
    beta->makeSound();

    delete(meta);
    delete(beta);
    delete(j);
    delete(i);
   
}