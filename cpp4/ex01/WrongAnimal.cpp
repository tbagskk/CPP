#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( std::string type ): _type(type)
{
	std::cout << "Le constructeur par défault de WrongAnimal de type " << type << " à été appelé" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const &copy )
{
	std::cout << "Le constructeur de copy de WrongAnimal à été appelé" << std::endl;
	*this = copy;
	return;
}

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &rhs )
{
	std::cout << "Opérateur d'affectation WrongAnimal appelé" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Le destructeur de WrongAnimal à été appelé" << std::endl;
	return;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "** DEs animaux font encore du bruit**" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}
