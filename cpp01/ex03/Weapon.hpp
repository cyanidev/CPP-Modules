#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string _type;

	public:
	//constructor to initialize the weapon type
		Weapon(std::string weaponType);

	//getter method returns the weapon, as a const reference
	//Marking the reference as const ensures that the caller
	//cannot modify the returned object.
		const std::string getType(void) const;

	//setter method sets the weapon type
		void setType(std::string weaponType);
};

#endif
