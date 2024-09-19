#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
	: Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "\x1b[33mClapTrap " << Name << " wants to fight.\x1b[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy constructor called." << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Assignation operator called." << std::endl;
	if (this != &other)
	{
		Name = other.Name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << Name << " fainted." << std::endl; 
}

void ClapTrap::attack(const std::string& target) {
	if (EnergyPoints > 0 && HitPoints > 0) {
		--EnergyPoints;
		std::cout << "ClapTrap " << Name << " attacks " << target 
			<< ", causing " << AttackDamage << " points of damage!\x1b[0m" << std::endl;
	} else {
		std::cout << "ClapTrap " << Name << " cannot attack due to insufficient energy or hit points." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount >= HitPoints) {
		HitPoints = 0;
	} else {
		HitPoints -= amount;
	}
	std::cout << "\x1b[31mClapTrap " << Name << " took " << amount << " points of damage!\x1b[0m" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (EnergyPoints > 0)
	{
		--EnergyPoints;
		HitPoints += amount;
		std::cout << "\x1b[42mClapTrap " << Name << " repaired itself, gaining " << amount << " hit points!\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " cannot repair itself due to insufficient energy." << std::endl;
	}
}