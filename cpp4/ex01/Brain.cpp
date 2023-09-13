#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Default Brain constructor called" << std::endl;
	return;
}

Brain::Brain( Brain const &copy )
{
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = copy;
	return;
}

Brain	&Brain::operator=( Brain const &rhs )
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	std::cout << "Assignment Brain operator called" << std::endl;
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
	return;
}