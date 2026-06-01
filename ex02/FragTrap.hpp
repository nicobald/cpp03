#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
protected:
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &copy);
    FragTrap& operator=(const FragTrap &copy);
    ~FragTrap();
    void highFivesGuys(void);
};

