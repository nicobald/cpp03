#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "ScavTrap Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->setAttack(20);
    this->setEp(50);
    this->setHp(100);
    this->setName(name);
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    this->setAttack(copy.getAttack());
    this->setEp(copy.getEp());
    this->setHp(copy.getHp());
    this->setName(copy.getName());
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    if (this->getHp() <= 0)
        return;
    std::cout << this->getName() << " give me an high five!" << std::endl;
}