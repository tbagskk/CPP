#include "Zombie.h"

int main(void)
{
	std::cout << "25 Zombies Gabin vont etre crees\n";
	Zombie *grr = zombieHorde(25, "Gabin");
	for (int i = 0; i < 25; i++)
	{
		grr[i].announce();
	}
	delete [] grr;
	return (0);
}