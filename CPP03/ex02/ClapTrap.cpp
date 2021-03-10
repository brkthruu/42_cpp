#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	this->name = "Anonymous";
	std::cout << "ClapTrap " << name << " generated." << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

ClapTrap::ClapTrap(std::string const name): name(name)
{
	std::cout << "ClapTrap " << name << " generated." << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

ClapTrap::ClapTrap( const ClapTrap &ref )
{
	this->level = ref.level;
	this->hitPoints = ref.hitPoints;
	this->maxHitPoints = ref.maxHitPoints;
	this->energyPoints = ref.energyPoints;
	this->maxEnergyPoints = ref.maxEnergyPoints;
	this->meleeAttackDamage = ref.meleeAttackDamage;
	this->rangedAttackDamage = ref.rangedAttackDamage;
	this->armorDamageReduction = ref.armorDamageReduction;
	std::cout << "(Copied) FR4G-TP " << this->name << " generated!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destroyed." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const &ref)
{
	this->level = ref.level;
	this->hitPoints = ref.hitPoints;
	this->maxHitPoints = ref.maxHitPoints;
	this->energyPoints = ref.energyPoints;
	this->maxEnergyPoints = ref.maxEnergyPoints;
	this->meleeAttackDamage = ref.meleeAttackDamage;
	this->rangedAttackDamage = ref.rangedAttackDamage;
	this->armorDamageReduction = ref.armorDamageReduction;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

unsigned int	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " atacks "
				<< target << " at range, causing "
				<< this->rangedAttackDamage << " points of damage!\n\n";
	return (this->rangedAttackDamage);
}

unsigned int    ClapTrap::meleeAttack(std::string const &target)
{
    std::cout<< this-> name << " attacks "
				<< target <<" at melee, causing " 
				<< this->meleeAttackDamage <<" points of damage!\n\n";
    return (this->meleeAttackDamage);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout<< this->name << " already dead!\n\n";
		return ;
	}
	int damage = amount - armorDamageReduction;

	if (damage < 0)
		damage = 0;
	hitPoints -= damage;
	std::cout<< name << " takes " << damage << " point(s) of damage!\n";
	if (hitPoints <= 0)
	{
		hitPoints = 0;
		std::cout<< this->name <<" is dead!\n";
	}
	std::cout<< name << "'s HP is now " << this->hitPoints << '\n';
	std::cout<< '\n';
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	this->energyPoints += amount;
	std::cout<< this->name << " repaired " << amount <<" point(s) of hit and energy!\n";
	if (maxHitPoints < hitPoints)
	{
		hitPoints = maxHitPoints;
		std::cout<< this->name << "'s hitPoint is now 100%!\n";
	}
	if (maxEnergyPoints < energyPoints)
	{
		energyPoints = maxEnergyPoints;
		std::cout<< this->name << "'s energyPoint is now 100%!\n";
	}
	std::cout<< '\n';
}

/* ************************************************************************** */