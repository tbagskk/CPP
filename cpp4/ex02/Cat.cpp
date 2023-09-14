#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Le constructeur par défault de Cat a été appelé" << std::endl;
	this->_brain = new Brain();
	return;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	std::cout << "Le constructeur de copy de Cat à été appelé" << std::endl;
	*this = copy;
	return;
}

Cat	&Cat::operator=(Cat const &source)
{
	std::cout << "Opérateur d'affectation Cat appelé" << std::endl;
	this->_type = source._type;
	this->_brain = new Brain( *source._brain);
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Le destructeur de Cat à été appelé" << std::endl;
	delete this->_brain;
	return;
}

void	Cat::makeSound(void) const
{
	std::cout << "** (cuicui) Grognement de chat **!" << std::endl;
}
