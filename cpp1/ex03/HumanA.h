#include "Weapon.h"
#include <iostream>

class	HumanA
{
	public:

		HumanA(std::string name, Weapon &ewapon);
		~HumanA(void);

		void attack(void);
		Weapon &getWeapon(void);

	private:

		std::string name;
		Weapon	&weapon;
};