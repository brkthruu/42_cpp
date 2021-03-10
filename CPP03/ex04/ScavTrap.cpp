#include "ScavTrap.hpp"

std::string ScavTrap::questions[ScavTrap::nbrChallenges] = {
	"What is the capital of Korea?",
	"What is another word for Fourth of July?",
	"Some months have 31 days, but how many have 28?",
	"What does 'IP' stand for in IP address?",
	"Name five vegetables in English."
};

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::ScavTrap(std::string const name): ClapTrap(name)
{
	std::cout << this->name << ": Locking the door." << std::endl;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::ScavTrap( const ScavTrap &ref ): ClapTrap(ref.name)
{
	std::cout << "(Copied) " << this->name << ": Locking the door." << std::endl;
	this->name = ref.name;
	this->level = ref.level;
	this->hitPoints = ref.hitPoints;
	this->maxHitPoints = ref.maxHitPoints;
	this->energyPoints = ref.energyPoints;
	this->maxEnergyPoints = ref.maxEnergyPoints;
	this->meleeAttackDamage = ref.meleeAttackDamage;
	this->rangedAttackDamage = ref.rangedAttackDamage;
	this->armorDamageReduction = ref.armorDamageReduction;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << this->name << ": Door breached."  << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const &ref )
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
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::challengeNewcomer(void)
{
	srand(clock());

	int		idx;
	idx = rand()%5;
	std::cout << this->name << ": ";
	std::cout << ScavTrap::questions[rand() % ScavTrap::nbrChallenges] << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */