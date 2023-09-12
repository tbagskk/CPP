#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
}

Weapon::~Weapon(void)
{
}

const std::string	&Weapon::getType(void)
{
	return (this->_type);
}

bool		Weapon::setType(const std::string &newType )
{
	if (newType == "")
	{
		std::cout << "new type can't be empty string" << std::endl;
		return (false);
	}
	this->_type = newType;
	return (true);
}
