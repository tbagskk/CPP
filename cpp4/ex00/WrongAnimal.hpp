#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string.h>
# include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const &copy );
		WrongAnimal	&operator=( WrongAnimal const &rhs );
		virtual ~WrongAnimal( void );

		void makeSound( void ) const;
		std::string getType( void ) const;
};


#endif
