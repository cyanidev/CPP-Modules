#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	public:
	// Public method that triggers the appropriate complaint based on the level
	void complain(std::string level);

	private:
	// Private member functions for each complaint level
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif