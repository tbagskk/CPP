
#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <cstdlib>
# include <climits>



# define CHAR   1
# define INT    2
# define FLOAT  3
# define DOUBLE 4

class ScalarConverter
{
	private:
		ScalarConverter( void );
		ScalarConverter( ScalarConverter const &copy );
		ScalarConverter	&operator=( ScalarConverter const &rhs );
		~ScalarConverter( void );
	public:
		static void	convert( std::string const &literal );
};

#endif
