#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attack with their " << this->weapon.getType() << std::endl;
}

Weapon	&HumanA::getWeapon(void)
{
	return (this->weapon);
}