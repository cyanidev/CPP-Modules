#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}

	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	// Test 1: HumanA with weapon
    {
        std::cout << "Test 1: HumanA with weapon" << std::endl;
        Weapon club("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

    // Test 2: HumanB with weapon set later
    {
        std::cout << "\nTest 2: HumanB with weapon set later" << std::endl;
        Weapon club("crude spiked club");
        HumanB jim("Jim");
        jim.attack();  // Should indicate no weapon
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    // Test 3: HumanB with no weapon
    {
        std::cout << "\nTest 3: HumanB with no weapon" << std::endl;
        HumanB alice("Alice");
        alice.attack();  // Should indicate no weapon
    }

    // Test 4: Multiple Humans and Weapons
    {
        std::cout << "\nTest 4: Multiple Humans and Weapons" << std::endl;
        Weapon sword("sharp sword");
        Weapon bow("long bow");

        HumanA arthur("Arthur", sword);
        HumanB lancelot("Lancelot");
        lancelot.setWeapon(bow);

        arthur.attack();
        lancelot.attack();
        
        sword.setType("rusty sword");
        bow.setType("recurve bow");
        
        arthur.attack();
        lancelot.attack();
    }
	return (0);
}