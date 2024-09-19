#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

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
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif

//private: Los miembros son accesibles solo dentro de la misma clase.
//protected: Los miembros son accesibles en la clase base y en las clases derivadas.
//public: Los miembros son accesibles desde cualquier parte del código.
//Al usar protected, las clases derivadas tienen más flexibilidad sin 
//comprometer el encapsulamiento como lo harías con public.