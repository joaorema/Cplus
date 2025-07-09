#include "ClapTrap.hpp"
#include "Scavtrap.hpp"


int main()
{
    Claptrap a("John");
    Claptrap b("Roger");
    Scavtrap c("Antonio");


    std::cout << c.getName() << " Hitpoints = " << c.getHitPoints() << std::endl;
    a.attack(c.getName());
    c.takeDamage(a.getAttackDamage());
    std::cout << c.getName() << " Hitpoints = " << c.getHitPoints() << std::endl;
    c.guardgate();
    c.beRepaired(5);
    std::cout << c.getName() << " Hitpoints = " << c.getHitPoints() << std::endl;
    c.guardgate();
    c.attack(b.getName());

}
