#include "NinjaTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

NinjaTrap::NinjaTrap()
{
	this->name = "Anonymous";
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap( std::string const name) : ClapTrap(name)
{
	std::cout << "NinjaTrap " << this->name << " generated!" << std::endl;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap( const NinjaTrap &ref ) : ClapTrap(ref.name)
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	std::cout << "(Copied) NinjaTrap " << this->name << " generated!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

NinjaTrap::~NinjaTrap()
{
	std::cout << this->name << ": I will vanish, for now."  << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

NinjaTrap &				NinjaTrap::operator=( NinjaTrap const &ref )
{
	name = ref.name;
    hitPoints = ref.hitPoints;
    maxHitPoints = ref.maxHitPoints;
    energyPoints = ref.energyPoints;
    maxEnergyPoints = ref.maxEnergyPoints;
    level = ref.level;
    meleeAttackDamage = ref.meleeAttackDamage;
    rangedAttackDamage = ref.rangedAttackDamage;
    armorDamageReduction = ref.armorDamageReduction;
    return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << this->name << " tries to smash " << trap.getName()
			<< " but missed. FragTrap was too fast." << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	if (this->energyPoints >= 20)
	{
		this->energyPoints -= 20;
		std::cout << this->name << " try to cut trough " << trap.getName()
				<< " and damage him for " << this->rangedAttackDamage << "!" << std::endl;
		trap.takeDamage(this->rangedAttackDamage);
	}
	else
		std::cout << this->name << " is too tired." << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	if (this->energyPoints >= 60)
	{
		this->energyPoints -= 60;
		std::cout << this->name << " sense the ClapTrap " << trap.getName()
				<< " but can't see it." << std::endl;
	}
	else
	{
		std::cout << this->name << " finally see the ClapTrap " << trap.getName()
				<< " before falling on the ground." << std::endl;
		this->takeDamage(this->hitPoints + this->armorDamageReduction);
	}
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	if ((rand() % 100) > 50)
	{
		std::cout << this->name << " throw Shuriken at " << trap.getName()
				<< " and damage him for " << this->rangedAttackDamage << "!" << std::endl;
	}
	else
	{
		std::cout << this->name << " throw Shuriken at " << trap.getName()
				<< " but misses" << std::endl;
	}
}


/* ************************************************************************** */