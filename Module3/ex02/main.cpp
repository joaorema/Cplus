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
    c.attack(a.getName());
    a.takeDamage(c.getAttackDamage());
    std::cout << a.getName() << " Hitpoints = " << a.getHitPoints() << std::endl;
    d.attack(c.getName());
    c.takeDamage(d.getAttackDamage());
    std::cout << c.getName() << " Hitpoints = " << c.getHitPoints() << std::endl;


}
