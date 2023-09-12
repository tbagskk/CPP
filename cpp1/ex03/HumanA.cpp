#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}

Weapon	&HumanA::getWeapon(void)
{
	return (this->_weapon);
}