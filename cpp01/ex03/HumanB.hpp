#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	private:
		std::string _name; //name of human
		Weapon *weapon; //pointer to weapon object
	public:
		//constructor to initialize the name
		HumanB(std::string humanName);
		//set the weapon object
		void setWeapon(Weapon &weapon);
		//attack function
		void attack(void) const;
};

#endif