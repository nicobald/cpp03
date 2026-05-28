#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap1("monster1");
    ScavTrap scav1("Bigmonster1");
    while (clap1.getEp() > 1)
    {
        clap1.attack("target1");
    }
    // clap1.attack("target");
    clap1.takeDamage(9);
    clap1.beRepaired(3);
    scav1.attack("target2");
    scav1.takeDamage(10);
    scav1.beRepaired(10);
    scav1.guardGate();
    return (0);
}
