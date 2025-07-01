#include "ClapTrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"


int main()
{
    Claptrap a("John");
    Claptrap b("Roger");
    Scavtrap c("Antonio");
    Fragtrap d("Joaquim");

    d.highFiveGuys();
    std::cout << c.getName() << " Hitpoints = " << c.getHitPoints() << std::endl;
    a.attack(c.getName());
    c.takeDamage(a.getAttackDamage());
    std::cout << c.getName() << " Hitpoints = " << c.getHitPoints() << std::endl;
    c.guardgate();
    c.beRepaired(5);
    std::cout << c.getName() << " Hitpoints = " << c.getHitPoints() << std::endl;
    c.guardgate();
    d.highFiveGuys();

}
