#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private :
        FragTrap(void);
    public :
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &src);
        ~FragTrap(void);

        FragTrap &operator=(const FragTrap &other);

        void highFivesGuys(void);

};

#endif