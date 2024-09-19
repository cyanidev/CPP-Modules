#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 28;
	std::cout << "\x1b[34mScavTrap " << Name << " has spawned.\x1b[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "Copy constructor called for Scavtrap " << Name << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "Assignment operator for ScavTrap " << Name << " called." << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << Name << " destroyed itself." << std::endl;
}

//sobreescribir esto
void ScavTrap::attack(const std::string &target) {
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		--EnergyPoints;
		std::cout << "ScavTrap " << Name << " shoots its lasers at " << target 
		<< ", causing " << AttackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << Name << " doesnt have enough energy or hit points." << std::endl;
	}
}

// Nueva función miembro guardGate
void ScavTrap::guardGate() {
	std::cout << "\x1b[45mScavTrap " << Name << " is now in Gatekeeper mode.\x1b[0m" << std::endl;
}