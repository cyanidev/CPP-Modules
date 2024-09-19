#include "Harl.hpp"

// Private member functions for different complaint levels
void Harl::debug(void)
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

//public method that triggers the appropriate complaint based on the level
void Harl::complain(std::string level)
{
	//array of function pointers to the private member functions
	void (Harl::*complaints[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	//array of corresponding string labels
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	//iterate through levels and match the input level
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*complaints[i])(); // Call the corresponding member function
			return ;
		}
	}
	std::cout << "Unknown complaint level: " << level << std::endl;
}