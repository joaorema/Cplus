#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class Claptrap
{
    protected:
    std::string _name;
    int _hitpoints;      //10
    int _energypoints;   //10   
    int _attackdamage;   //0

    public:
    Claptrap();                             //normal constructor
    Claptrap(std::string name);             //costructor with name
    virtual ~Claptrap();                            //Destructor
    Claptrap(const Claptrap &other);
    void attack(const std::string& target); //used to attack a target
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    int getHitPoints(void) const;
    int getEnergyPoints(void) const;
    int getAttackDamage(void) const;
    virtual std::string getName(void) const;

    void setHitPoints(int const nbr);
    void setEnergyPoints(int const nbr);
    void setAttackdamage(int const nbr);
    void setName(std::string name);

};
#endif