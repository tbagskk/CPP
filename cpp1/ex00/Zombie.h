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
    Zombie (std::string name);
    ~Zombie(void);
    void    randomChump(std::string name);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif