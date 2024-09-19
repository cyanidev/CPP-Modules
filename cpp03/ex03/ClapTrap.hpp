#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <string>
#include <iostream>


class ClapTrap {
	protected:
		std::string		Name;
		unsigned int	HitPoints;
		unsigned int	EnergyPoints;
		unsigned int	AttackDamage;

	public:
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();

	//member functions
		virtual void attack(const std::string &target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
};

#endif