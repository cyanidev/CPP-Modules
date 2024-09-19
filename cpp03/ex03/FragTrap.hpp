#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

//Definir herencia virtual en la clase base: Esto asegura que solo haya
//una instancia de los miembros de la clase base ClapTrap cuando se
//hereda a través de múltiples clases derivadas.
class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &other);
		~FragTrap();

		void highFivesGuys(void);
};

#endif