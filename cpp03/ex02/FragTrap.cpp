#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "\033[35mFragTrap " << Name << " joined the party!\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	*this = other;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "\033[35mFragTrap " << Name << " went to sleep.\033[0m" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << Name << " high fives everyone!" << std::endl;
} 