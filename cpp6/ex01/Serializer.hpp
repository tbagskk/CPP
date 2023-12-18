
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>
#include <string>

typedef struct s_Data
{
	int	value;
}	t_Data;


class Serializer
{
	private:
		Serializer( void );
		Serializer( Serializer const &copy );
		Serializer	&operator=( Serializer const &rhs );
		~Serializer( void );
	public:
		static uintptr_t serialize( t_Data *ptr );
		static t_Data	*deserialize( uintptr_t raw );
};

#endif
