
#include "Serializer.hpp"

Serializer::Serializer( void )
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Serializer::Serializer( Serializer const &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Serializer	&Serializer::operator=( Serializer const &rhs )
{
	std::cout << "Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);

	return (*this);
}

Serializer::~Serializer( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

uintptr_t	Serializer::serialize( t_Data *ptr )
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

t_Data	*Serializer::deserialize( uintptr_t raw )
{
	return (reinterpret_cast<t_Data *>(raw));
}
