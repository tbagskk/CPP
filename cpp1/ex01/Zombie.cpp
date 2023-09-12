#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->_name = name;
	std::cout << this->_name << " has been created" << std::endl;
	return;
}

Zombie::Zombie( void )
{
	std::cout << "New Zombie has been created" << std::endl;
	return;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " has been deleted" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout <<this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}