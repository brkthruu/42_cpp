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

FragTrap::FragTrap()
{
	this->name = "Anonymous";
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string const name): name(name)
{
	std::cout << "FR4G-TP " << this->name << " generated!" << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::FragTrap( const FragTrap &ref ): name(ref.name)
{
	this->level = ref.level;
	this->hitPoints = ref.hitPoints;
	this->maxHitPoints = ref.maxHitPoints;
	this->energyPoints = ref.energyPoints;
	this->maxEnergyPoints = ref.maxEnergyPoints;
	this->meleeAttackDamage = ref.meleeAttackDamage;
	this->rangedAttackDamage = ref.rangedAttackDamage;
	this->armorDamageReduction = ref.armorDamageReduction;
	std::cout << "FR4G-TP " << this->name << " generated!" << std::endl;
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

unsigned int	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " atacks "
				<< target << " at range, causing "
				<< this->rangedAttackDamage << " points of damage!\n\n";
	return (this->rangedAttackDamage);
}

unsigned int    FragTrap::meleeAttack(std::string const &target)
{
    std::cout<< this-> name << " attacks "
				<< target <<" at melee, causing " 
				<< this->meleeAttackDamage <<" points of damage!\n\n";
    return (this->meleeAttackDamage);
}

void	FragTrap::takeDamage(unsigned int amount)
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

void    FragTrap::beRepaired(unsigned int amount)
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