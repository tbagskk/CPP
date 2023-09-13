#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Le constructeur par défault de Animal a été appelé" << std::endl;
	return;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << "Le constructeur d'Animal du type " << type << " à été appelé " << std::endl;
	return;
}

Animal::Animal( Animal const &copy )
{
	std::cout << "Le constructeur de copy de Animal à été appelé" << std::endl;
	*this = copy;
	return;
}

Animal	&Animal::operator=( Animal const &source )
{
	std::cout << "Opérateur d'affectation Animal appelé" << std::endl;
	this->_type = source._type;
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "Le destructeur de Animal à été appelé" << std::endl;
	return;
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "****** Des animaux font du bruits... ******" << std::endl;
}

