
#ifndef ANIMAL_H
# define ANIMAL_H

# include <string.h>
# include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:

		Animal(void);
		Animal(std::string type);
		Animal(Animal const &copy);
		Animal &operator=(Animal const &source);
		virtual ~Animal(void);

		std::string getType(void) const;
		virtual void makeSound( void ) const;
};


#endif