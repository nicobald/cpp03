#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap1("monster1");
    while (clap1.getEp() > 1)
    {
        clap1.attack("target");
    }
    // clap1.attack("target");
    clap1.takeDamage(9);
    clap1.beRepaired(3);
    return (0);
}
