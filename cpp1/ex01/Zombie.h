#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <stdio.h>


class Zombie
{
private:
    std::string name;
public:
    void    announce(void);
	void	set_name(std::string name);
    Zombie (void);
    ~Zombie(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif