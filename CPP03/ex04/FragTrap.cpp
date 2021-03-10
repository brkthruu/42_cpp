#include "FragTrap.hpp"

std::string FragTrap::attack[FragTrap::nbrWeapons] = {
	"bare hand",
	"wooden stick",
	"arrow",
	"pistol",
	"hellfire"
};

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
	this->name = "Anonymous";
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string const name): ClapTrap(name)
{
	std::cout << "FR4G-TP " << this->name << " generated!" << std::endl;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::FragTrap( const FragTrap &ref ): ClapTrap(ref.name)
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

FragTrap::~FragTrap()
{
	std::cout <<  "FR4G-TP " << this->name << " destroyed!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
FragTrap& FragTrap::operator=(FragTrap const &ref)
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

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	srand(clock());

	if (energyPoints < 25)
	{
        std::cout<< this->name << " has not enough energy for this skill!\n\n";
        return (0);
	}
	energyPoints -= 25;
	int		damage[] = {10, 20, 30, 40, 100};
	int		idx;
	idx = rand()%5;
	std::cout<< this->name << " attacks " << target << " with "<< this->attack[idx] 
	<< " causing "<< damage[idx] << " points of damage!\n";
	return (damage[idx]);
}

/* ************************************************************************** */