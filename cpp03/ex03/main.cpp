#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

// Definir colores
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

int main() {
    // Crear instancias de los diferentes robots con nombres diferentes
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavy");
    FragTrap frag("Fraggy");
    DiamondTrap diamond("Diamy");

    std::cout << YELLOW << "\n--- Testing ClapTrap ---" << RESET << std::endl;
    clap.attack("enemy1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << GREEN << "\n--- Testing ScavTrap ---" << RESET << std::endl;
    scav.attack("enemy2");
    scav.takeDamage(10);
    scav.beRepaired(5);
    scav.guardGate();

    std::cout << BLUE << "\n--- Testing FragTrap ---" << RESET << std::endl;
    frag.attack("enemy3");
    frag.takeDamage(20);
    frag.beRepaired(10);
    frag.highFivesGuys();

    std::cout << MAGENTA << "\n--- Testing DiamondTrap ---" << RESET << std::endl;
    diamond.attack("enemy4");
    diamond.takeDamage(30);
    diamond.beRepaired(20);
    diamond.whoAmI();

    return 0;
}
