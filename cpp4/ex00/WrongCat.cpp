#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal("WrongCat")
{
	std::cout << "Le constructeur par défault de WrongCat a été appelé" << std::endl;
	return;
}

WrongCat::WrongCat( WrongCat const &copy ): WrongAnimal(copy)
{
	std::cout << "Le constructeur de copy de WrongCat à été appelé" << std::endl;
	*this = copy;
	return;
}

WrongCat	&WrongCat::operator=( WrongCat const &rhs )
{
	std::cout << "Opérateur d'affectation WrongCat appelé" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << "Le destructeur de WrongCat à été appelé" << std::endl;
	return;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "**bruit de chat**" << std::endl;
}
