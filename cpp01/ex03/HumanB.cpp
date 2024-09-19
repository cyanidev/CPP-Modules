#include "HumanB.hpp"

//constructor
HumanB::HumanB(std::string humanName) : _name(humanName), weapon(nullptr) {}

//method to set the weapon object
void HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}

void HumanB::attack() const
{
	if (weapon)
	{
		std::cout << _name <<  " attacks with their" << weapon->getType() << std::endl;
	}
	else
	{
		std::cout << _name << " attacks with their bare hands" << std::endl;
	}
}
