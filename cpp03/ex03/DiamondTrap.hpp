#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string Name;

	public:
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &other);
		~DiamondTrap();

		void whoAmI();

		//funciones de ClapTrap sin ambigüedad
		using ClapTrap::takeDamage;
		using ClapTrap::beRepaired;

		//función attack() será heredada de ScavTrap
		using ScavTrap::attack;
};

#endif
