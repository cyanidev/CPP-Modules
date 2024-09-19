#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
		std::string _name;
		Weapon &weapon; //reference to weapon object
	
	public:
	//constructor to initialize the name and weapon object
		HumanA(std::string name, Weapon &weapon);
	//member function to perform attack
		void attack(void) const;
};

#endif