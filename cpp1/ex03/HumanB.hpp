#include "Weapon.hpp"
#include <iostream>

class HumanB
{

public:

		HumanB(std::string name);
		~HumanB(void);

		void attack(void);
		Weapon &getWeapon(void);
		bool setWeapon(Weapon& newWeapon);

private:

		std::string _name;
		Weapon *_weapon;
};