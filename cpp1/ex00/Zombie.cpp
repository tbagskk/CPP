#include "Zombie.h"

Zombie::Zombie(std::string name): name(name)
{

}

Zombie::~Zombie(void)
{
	
}

void	Zombie::announce(void)
{
	std::cout <<this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}