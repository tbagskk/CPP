#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain(void);
		Brain(Brain const &copy);
		Brain	&operator=(Brain const &source);
		virtual ~Brain(void);

};

#endif
