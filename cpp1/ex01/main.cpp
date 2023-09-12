#include "Zombie.hpp"

int main(void)
{
	std::cout << "10 Zombies Gabin vont etre crées\n";
	Zombie *grr = zombieHorde(10, "Gabin");
	for (int i = 0; i < 10; i++)
	{
		grr[i].announce();
	}
	delete [] grr;
	return (0);
}