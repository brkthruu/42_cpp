#include "SuperTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperTrap::SuperTrap(std::string const name):
	ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << this->name << ": SUPER CREATING." << std::endl;
	this->hitPoints =  100;
	this->maxHitPoints = 100;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

SuperTrap::SuperTrap( const SuperTrap &ref)
{
	this->name = ref.name;
	this->level = ref.level;
	this->hitPoints = ref.hitPoints;
	this->maxHitPoints = ref.maxHitPoints;
	this->energyPoints = ref.energyPoints;
	this->maxEnergyPoints = ref.maxEnergyPoints;
	this->meleeAttackDamage = ref.meleeAttackDamage;
	this->rangedAttackDamage = ref.rangedAttackDamage;
	this->armorDamageReduction = ref.armorDamageReduction;
	std::cout << this->name << ": SUPER CREATING." << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperTrap::~SuperTrap()
{
	std::cout << this->name << ": SUPER RETIRING."  << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperTrap &				SuperTrap::operator=( SuperTrap const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void SuperTrap::show_data(void)
{
	std::cout << "====ClapTrap Data====\n" << std::endl;
	std::cout << ClapTrap::hitPoints << std::endl;
	std::cout << ClapTrap::maxHitPoints << std::endl;
	std::cout << ClapTrap::energyPoints << std::endl;
	std::cout << ClapTrap::maxEnergyPoints << std::endl;
	std::cout << ClapTrap::meleeAttackDamage << std::endl;
	std::cout << ClapTrap::rangedAttackDamage << std::endl;
	std::cout << ClapTrap::armorDamageReduction << std::endl;

	std::cout << "====FragTrap Data====\n" << std::endl;
	std::cout << FragTrap::hitPoints << std::endl;
	std::cout << FragTrap::maxHitPoints << std::endl;
	std::cout << FragTrap::energyPoints << std::endl;
	std::cout << FragTrap::maxEnergyPoints << std::endl;
	std::cout << FragTrap::meleeAttackDamage << std::endl;
	std::cout << FragTrap::rangedAttackDamage << std::endl;
	std::cout << FragTrap::armorDamageReduction << std::endl;

	std::cout << "====SuperTrap Data====\n" << std::endl;
	std::cout << this->hitPoints << std::endl;
	std::cout << this->maxHitPoints << std::endl;
	std::cout << this->energyPoints << std::endl;
	std::cout << this->maxEnergyPoints << std::endl;
	std::cout << this->meleeAttackDamage << std::endl;
	std::cout << this->rangedAttackDamage << std::endl;
	std::cout << this->armorDamageReduction << std::endl;
}


/* ************************************************************************** */