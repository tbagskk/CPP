#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat: public Animal
{
	public:
	
		Cat(void);
		Cat(Cat const &copy);
		Cat	&operator=(Cat const &source);
		~Cat(void);

		virtual void	makeSound(void) const;
};

#endif
