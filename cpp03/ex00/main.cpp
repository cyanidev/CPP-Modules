#include "ClapTrap.hpp"

int main() {
	{
	ClapTrap claptrap("Metapod");

	claptrap.attack("Pikachu");
	claptrap.takeDamage(3);
	claptrap.beRepaired(5);
	claptrap.attack("another Pikachu");
	}
	{
	ClapTrap claptrap("robotcito");

	claptrap.attack("robotcita");
	claptrap.takeDamage(10);
	claptrap.attack("robotcete");
	}
	{
	ClapTrap claptrap("Andrea");

	claptrap.attack("Ethan");
	claptrap.takeDamage(9);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.takeDamage(5);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.attack("another claptrap");
	}

	return (0);
}
