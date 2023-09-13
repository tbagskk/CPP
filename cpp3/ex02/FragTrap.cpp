#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
    this->_Name = name;
    this->_HitPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "Le constructeur par default de FragTrap à été appelé" << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy)
{
    std::cout << "Le constructeur de copy de FragTrap à été appelé" << std::endl;
    return;
}

FragTrap	&FragTrap::operator=( FragTrap const &source )
{
	std::cout << "Opérateur d'affectation FragTrap appelé" << std::endl;
	this->_Name = source._Name;
	this->_HitPoints = source._HitPoints;
	this->_EnergyPoints = source._EnergyPoints;
	this->_AttackDamage = source._AttackDamage;
	return (*this);
}

FragTrap::~FragTrap( void )
{
	std::cout << "Le destructeur de FragTrap à été appelé" << std::endl;
	return;
}

void	FragTrap::highFivesGuys ( void )
{
	std::cout << "Salut, donne moi high !!!!!!!" << std::endl;
	return;
}