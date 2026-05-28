#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _hitPoints(10), _energiePoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): _name(name), _hitPoints(10), _energiePoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

std::string ClapTrap::getName() const
{
    return(this->_name);
}

int ClapTrap::getAttack() const
{
    return(this->_attackDamage);
}

int ClapTrap::getHp() const
{
    return(this->_hitPoints);
}

int ClapTrap::getEp() const
{
    return(this->_energiePoints );
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setAttack(int value)
{
    this->_attackDamage = value;
}

void ClapTrap::setHp(int value)
{
    this->_hitPoints = value;
}

void ClapTrap::setEp(int value)
{
    this->_energiePoints = value;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->getEp() == 0 || this->getHp() == 0)
    {
        std::cout << "Out of Hp or Ep" << std::endl;
        return;
    }
    this->setEp(this->getEp() - 1);
    std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttack() << " points of damage!" << std::endl;
    std::cout << "ClapTrap " << this->getName() << " new Ep : " << this->getEp() << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "takeDamage called" << std::endl;
    std::cout << "ClapTrap " << this->getName() << " Hp before damage : " << this->getHp() << std::endl;
    this->setHp(this->getHp() - amount);  
    if (this->getHp() <= 0)
    {
        std::cout << this->getName() <<" Died" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->getName() << " new Hp : " << this->getHp() << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "beRepaired called" << std::endl;
    if (this->getEp() == 0 || this->getHp() == 0)
    {
        std::cout << "Out of Hp or Ep" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->getName() << " Hp before heal : " << this->getHp() << std::endl;
    std::cout << "ClapTrap " << this->getName() << " heal " << amount << std::endl;
    this->setHp(this->getHp() + amount);
    this->setEp(this->getEp() - 1);
    std::cout << "ClapTrap " << this->getName() << " Hp after heal : " << this->getHp() << std::endl;

}
