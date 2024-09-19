#include "Zombie.hpp"

Zombie* newZombie(std::string _name);
void randomChump(std::string _name);

int	main()
{
	//creates a zombie on the memory heap
	Zombie* heapZombie = newZombie("heapZombie");
	heapZombie->announce();

	//creates a zombie on the stack
	randomChump("stackZombie");

	//cleans up the zombie on the memory heap
	delete heapZombie;
	return (0);
}