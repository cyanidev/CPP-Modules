#include "Harl.hpp"

int main()
{
	Harl harl;

	//test the different complaint levels
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	//test an unknown level
	harl.complain("UNKNOWN");

	return (0);
}