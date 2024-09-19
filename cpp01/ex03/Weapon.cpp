#include "Weapon.hpp"

//constructor to initialize the weapon type
Weapon::Weapon(std::string weaponType) : _type(weaponType) {}

//getter method returns the weapon type
const std::string Weapon::getType(void) const {
	return (_type);
}

//setter method sets the weapon type
void Weapon::setType(std::string weaponType) {
	_type = weaponType;
}