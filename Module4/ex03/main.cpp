#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Polymorph.hpp"
#include "Execute.hpp"


int main()
{
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Polymorph());
    src->learnMateria(new Execute());


    ICharacter* me = new Character("me");
    ICharacter* bob = new Character("bob");


    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("polymorph");
    me->equip(tmp);
    tmp = src->createMateria("execute");
    bob->equip(tmp);
    
    int nbr = 0;
    std::cout << "1 Ice | 2 Cure | 3 Polymorph | Type 4 Bob's revenge" << std::endl;
    std::cin >> nbr;

    while(nbr > 0 && nbr <= 4)
    {
        if(nbr == 1)
            me->use(0, *bob);
        else if(nbr == 2)
            me->use(1, *bob);
        else if(nbr == 3)
            me->use(2, *bob);
        else if(nbr == 4)
        {
            bob->use(0, *me);
            break;
        }
        std::cin >> nbr;
    }

    delete bob;
    delete me;
    delete src;
    return 0;
}


