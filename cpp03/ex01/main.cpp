#include "ScavTrap.hpp"

int main() {
	{
	//crear un ClapTrap
	std::cout << "--------------- Test 0: Diferencia de ataque ---------------" << std::endl;
	ClapTrap claptrap("CT1");
	claptrap.attack("generic enemy");

	//ScavTrap
	ScavTrap scavtrap("X14");

	//funciones heredadas y nuevas
	scavtrap.attack("enemigo genérico");
	scavtrap.takeDamage(30);
	scavtrap.beRepaired(20);
	scavtrap.guardGate();
	}
	{
	//ScavTrap
	ScavTrap scavtrap("SCVT");

	//gastar toda la energía atacando
	std::cout << "--------------- Test 1: Quedarse sin energía ---------------" << std::endl;
	for (int i = 0; i < 51; ++i) { // 51 ataques para agotar la energía
		scavtrap.attack("Enemy");
	}
	scavtrap.beRepaired(10); // Intento de reparación sin energía
	std::cout << std::endl;

	//recibir suficiente daño para morir
	std::cout << "--------------- Test 2: Quedarse sin puntos de vida ---------------" << std::endl;
	scavtrap.takeDamage(110); // Daño mayor que los puntos de vida actuales
	scavtrap.attack("Enemy"); // Intento de ataque sin puntos de vida
	scavtrap.beRepaired(10);  // Intento de reparación sin puntos de vida
	std::cout << std::endl;

	//activar guardGate (no depende de puntos de vida o energía)
	std::cout << "--------------- Test 3: Activar guardGate ---------------" << std::endl;
	scavtrap.guardGate(); // Se puede activar incluso sin energía o puntos de vida
	std::cout << std::endl;
	}

	return (0);
}