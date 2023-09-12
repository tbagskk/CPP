#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::attack(void)
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;

	}
	else
	{
		std::cout << this->_name << " can't attack because they don't have a weapon" << std::endl;
	}
}

Weapon &HumanB::getWeapon(void)
{
	return (*(this->_weapon));
}

bool HumanB::setWeapon(Weapon &newWeapon)
{
	if (newWeapon.getType() == "")
	{
		std::cerr << "New weapon can't be nothing" << std::endl;
		return (false);
	}
	this->_weapon = &newWeapon;
	return (true);
}