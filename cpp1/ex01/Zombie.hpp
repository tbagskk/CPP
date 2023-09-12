#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>
#include <string>



class Zombie
{
private: 

    std::string _name;

public:
        void    announce( void );
        void	set_name( std::string name );
  		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif