#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Le constructeur par défault de Dog a été appelé" << std::endl;
	this->_brain = new Brain();
	return;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	std::cout << "Le constructeur de copy de Dog à été appelé" << std::endl;
	*this = copy;
	return;
}

Dog	&Dog::operator=(Dog const &source)
{
	std::cout << "Opérateur d'affectation Dog appelé" << std::endl;
	this->_type = source._type;
	this->_brain = new Brain( *source._brain);
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Le destructeur de Dog à été appelé" << std::endl;
	delete this->_brain;
	return;
}

void	Dog::makeSound(void) const
{
	std::cout << "** Graou (bruit de chien) Graou **" << std::endl;
}
