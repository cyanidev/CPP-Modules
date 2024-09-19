#include "FragTrap.hpp"

int main() {
	//crear FragTrap y probar funciones heredadas
	{
		FragTrap fragtrap("FT001");
		ClapTrap claptrap("CT001");

		//ataque, recibir daño, y reparación
		fragtrap.attack("Target 1");
		claptrap.attack("Target 2");
		fragtrap.takeDamage(50);
		fragtrap.beRepaired(30);
		fragtrap.highFivesGuys();
	}

	{
		FragTrap fragtrap("FT002");
		std::cout << "--------------- Test 1:  Quedarse sin energía ---------------" << std::endl;

		//ataque 101 veces para quedarse sin energía
		for (int i = 0; i < 101; ++i) {
			fragtrap.attack("Enemy");
		}

		//reparación sin energía
		fragtrap.beRepaired(20);
		std::cout << std::endl;
	}

	{
		FragTrap fragtrap("FT003");
		std::cout << "--------------- Test 2: Morir por daño ---------------" << std::endl;

		//suficiente daño para quedar con 0 HP
		fragtrap.takeDamage(150);

		//ataque y reparación tras "morir"
		fragtrap.attack("Enemy");
		fragtrap.beRepaired(20);
		std::cout << std::endl;
	}

	{
		FragTrap fragtrap("FT004");
		std::cout << "--------------- Test 3: highFivesGuys ---------------" << std::endl;
		fragtrap.highFivesGuys();
		std::cout << std::endl;
	}

	return 0;
}