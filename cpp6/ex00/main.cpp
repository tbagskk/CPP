
#include <iostream>
#include "Scalar.hpp"

int main( int ac, char **av )
{

	if (ac == 2)
	{
		ScalarConverter::convert(av[1]);
	}
	else
		std::cout << "Nothing to convert" << std::endl;
}
