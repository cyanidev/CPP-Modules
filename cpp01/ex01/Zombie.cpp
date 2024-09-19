#include "Zombie.hpp"

//default constructor
Zombie::Zombie() {}

//constructor implementation
Zombie::Zombie(std::string zombieName) : _name(zombieName) {}

//destructor implementation
Zombie::~Zombie() {
	std::cout << _name << " is destroyed." << std::endl;
}

//method to set the zombie name
void Zombie::setName(std::string zombiename) {
	_name = zombiename;
}

void Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}