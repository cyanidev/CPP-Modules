#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main()
{
	int N = 10;
	std::string name = "HordeZombie";

	//create a horde of 5 zombies
	Zombie *horde = zombieHorde(N, name);

	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	//delete the horde
	delete[] horde;
	return (0);
}