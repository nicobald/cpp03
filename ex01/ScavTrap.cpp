#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->setAttack(20);
    this->setEp(50);
    this->setHp(100);
    this->setName(name);
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    this->setAttack(copy.getAttack());
    this->setEp(copy.getEp());
    this->setHp(copy.getHp());
    this->setName(copy.getName());
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->getEp() == 0 || this->getHp() == 0)
    {
        std::cout << "Out of Hp or Ep" << std::endl;
        return;
    }
    this->setEp(this->getEp() - 1);
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttack() << " points of damage!" << std::endl;
    std::cout << "ScavTrap " << this->getName() << " new Ep : " << this->getEp() << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->getName() << " is now in gate keeper mode" << std::endl;
}