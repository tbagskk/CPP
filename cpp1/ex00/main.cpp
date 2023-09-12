#include "Zombie.hpp"



int	main( void )
{
	std::cout << "Creation avec instance de classe\n";
    Zombie Gabin("Gabin");
    Gabin.announce();

    std::cout << "Creation avec allocation dynamique\n";
    Zombie *Bob = newZombie("Bob");
    Bob->announce();
    delete Bob;

    std::cout << "Création avec randomChump" << std::endl;
	randomChump("Putin");
    return 0;
}