#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clapName"), FragTrap(name), ScavTrap(name), Name(name) {
	HitPoints = FragTrap::HitPoints;       // Hit points de FragTrap (100)
	EnergyPoints = ScavTrap::EnergyPoints; // Energy points de ScavTrap (50)
	AttackDamage = FragTrap::AttackDamage; // Attack damage de FragTrap (30)

	std::cout << "DiamondTrap " << Name << " assembled." << std::endl;
}

// Constructor por copia
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
	*this = other;
	std::cout << "DiamondTrap " << Name << " has been copied!" << std::endl;
}

// Operador de asignación
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	std::cout << "DiamondTrap assignment operator called." << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		FragTrap::operator=(other);
		ScavTrap::operator=(other);
		Name = other.Name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << Name << " disassemble." << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name is: " << Name << ", ClapTrap name is: " << ClapTrap::Name << std::endl;
}

