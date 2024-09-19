#include "Zombie.hpp"

//constructor to initialize the name of the zombie
Zombie::Zombie(std::string zombieName) : _name(zombieName) {}

//destructor to clean up when the zombie is destroyed
Zombie::~Zombie() {
	std::cout << _name << " is dead" << std::endl;
}

//member function to announce the zombie
void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
