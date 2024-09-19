#include "HumanA.hpp"

HumanA::HumanA(std::string humanName, Weapon &weapon) : _name(humanName), weapon(weapon) {}

void HumanA::attack() const
{
	std::cout << _name << " attacks with their " << weapon.getType() << std::endl;
}
