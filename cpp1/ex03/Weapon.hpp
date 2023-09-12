
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	public :
		Weapon(std::string type);
		~Weapon(void);
		std::string const &getType(void);
		bool	setType(const std::string &newType);
	private :
		std::string _type;
};

#endif