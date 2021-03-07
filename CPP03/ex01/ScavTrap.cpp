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

ScavTrap::ScavTrap()
{
	this->name = "Anonymous";
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::ScavTrap(std::string const name): name(name)
{
	std::cout << this->name << ": Locking the door." << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::ScavTrap( const ScavTrap &ref )
{
	std::cout << this->name << ": Locking the door." << std::endl;
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
unsigned int	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " === ranged attack ===> "
				<< target << " , causing "
				<< this->rangedAttackDamage << " points of damage!\n\n";
	return (this->rangedAttackDamage);
}

unsigned int	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout<< this-> name << " === melee attack ===> "
				<< target <<" , causing " 
				<< this->meleeAttackDamage <<" points of damage!\n\n";
    return (this->meleeAttackDamage);
}

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
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