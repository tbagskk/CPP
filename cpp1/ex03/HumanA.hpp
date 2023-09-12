#include "Weapon.hpp"
#include <iostream>

class	HumanA
{
	public:

		HumanA(std::string name, Weapon &ewapon);
		~HumanA(void);

		void attack(void);
		Weapon &getWeapon(void);

	private:

		std::string _name;
		Weapon	&_weapon;
};