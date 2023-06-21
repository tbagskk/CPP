#include "Weapon.h"

Weapon::Weapon(std::string type): type(type)
{
}

Weapon::~Weapon(void)
{
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

bool		Weapon::setType(const std::string &newType )
{
	if (newType == "")
	{
		std::cout << "new type can't be empty string" << std::endl;
		return (false);
	}
	this->type = newType;
	return (true);
}
