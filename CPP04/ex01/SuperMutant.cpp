#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::SuperMutant(const SuperMutant& ref): Enemy(ref)
{
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

SuperMutant& SuperMutant::operator=(const SuperMutant& ref)
{
    Enemy::operator=(ref);
    return (*this);
}

void    SuperMutant::takeDamage(int damage)
{
	if (this->getHP() > 0 && damage > 3)
		this->setHP(this->getHP() - damage + 3);
	return ;
}