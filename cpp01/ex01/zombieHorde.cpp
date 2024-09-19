#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	//allocate memory for N zombies
	Zombie *horde = new Zombie[N];

	//initialize the name of each zombie in the horde
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	//return a pointer to the first zombie in the horde
	return (horde);
}