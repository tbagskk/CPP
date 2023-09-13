#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(Dog const &copy);
		Dog	&operator=(Dog const &rhs);
		~Dog(void);

		virtual void	makeSound(void) const;
};

#endif
