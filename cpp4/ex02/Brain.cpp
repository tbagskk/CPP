#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Le constructeur par défault de Brain a été appelé" << std::endl;
	return;
}

Brain::Brain( Brain const &copy )
{
	std::cout << "Le constructeur de copy de Brain à été appelé" << std::endl;
	*this = copy;
	return;
}

Brain	&Brain::operator=( Brain const &source )
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = source._ideas[i];
	std::cout << "Opérateur d'affectation Brain appelé" << std::endl;
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "Le destructeur de Brain à été appelé" << std::endl;
	return;
}