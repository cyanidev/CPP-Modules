#include "Zombie.hpp"

//creates a zombie on the stack and announces it
void randomChump(std::string _name) {
	//creates a zombie on the stack
	Zombie stackZombie(_name);
	//announces the zombie
	stackZombie.announce();
	//stack zombie is destroyed when it goes out of scope
}