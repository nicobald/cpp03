#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string _name;
    int _hitPoints;
    int _energiePoints;
    int _attackDamage;
public:
    ClapTrap();
    ClapTrap(const std::string &_name);
    ClapTrap  &operator=(const ClapTrap &other);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName() const;
    int getAttack() const;
    int getHp() const;
    int getEp() const;
    void setName(std::string name);
    void setAttack(int value);
    void setHp(int value);
    void setEp(int value);
};

