#include "FragTrap.hpp"

int main(void)
{
    ClapTrap clap1("monster1");
    FragTrap frag1("bigmonster1");
    while (clap1.getEp() > 1)
    {
        clap1.attack("target1");
    }
    // clap1.attack("target");
    clap1.takeDamage(9);
    clap1.beRepaired(3);
    frag1.attack("target2");
    frag1.takeDamage(10);
    frag1.beRepaired(10);
    frag1.highFivesGuys();
    return (0);
}
