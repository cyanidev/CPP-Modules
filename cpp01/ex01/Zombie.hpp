#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	
	public:
		//default constructor
		Zombie();
		//constructor to initialize the name of the zombie
		Zombie(std::string zombieName);
		//destructor to clean up when the zombie is destroyed
		~Zombie();
		//method to set the zombie name
		void setName(std::string zombiename);
		//member function to announce the zombie
		void announce(void);
};

#endif