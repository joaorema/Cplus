#include "ClapTrap.hpp"


int main()
{
    Claptrap a("John");
    Claptrap b("Roger");

    a.setAttackdamage(5);
    std::cout << b.getName() << " Hitpoints = " << b.getHitPoints() << std::endl;
    std::cout << "Changed attack damage of " << a.getName() << " to 5" << std::endl;
    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    std::cout << b.getName() << " Hitpoints = " << b.getHitPoints() << std::endl;
    b.beRepaired(5);
    std::cout << b.getName() << " Hitpoints = " << b.getHitPoints() << std::endl;

    
}
