#include "ClapTrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"
#include "Diamontrap.hpp"


int main()
{
   
    Diamontrap a("John");
    Scavtrap b("Tiago");
    Fragtrap c("Antonio");
    Claptrap d("Jose");

    std::cout << a.getName() 
              << " has " << a.getHitPoints()    << " Hitpoints "
              << " has " << a.getEnergyPoints() << " Energypoints "
              << " has " << a.getAttackDamage() << " Attackdamage " << std::endl;
              
    
    std::cout << std::endl;          
    a.attack(b.getName());
    std::cout << std::endl;
    b.attack(d.getName());
    std::cout << std::endl;
    c.attack(a.getName());
    std::cout << std::endl;
    d.attack(c.getName());
    std::cout << std::endl;
    a.whoAmI();
    std::cout << std::endl;
    return 0;
}
