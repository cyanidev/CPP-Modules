#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

//Definir herencia virtual en la clase base: Esto asegura que solo haya
//una instancia de los miembros de la clase base ClapTrap cuando se
//hereda a través de múltiples clases derivadas.
class ScavTrap : virtual public ClapTrap {
	public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();

	void attack(const std::string &target) override;
	void guardGate();
};

#endif