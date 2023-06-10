#include "Zombie.h"

Zombie::Zombie()
{

}

Zombie::~Zombie(void)
{
	
}

void	Zombie::announce(void)
{
	std::cout <<this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}