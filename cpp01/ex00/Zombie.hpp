#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	
	public:
		//constructor to initialize the name of the zombie
		Zombie(std::string zombieName);
		//destructor to clean up when the zombie is destroyed
		~Zombie();

		//member function to announce the zombie
		void announce(void);
};

#endif