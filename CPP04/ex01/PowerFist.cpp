#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 50, 8)
{
	return ;
}

PowerFist::PowerFist(const PowerFist& ref): AWeapon(ref)
{
	return ;    
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist& PowerFist::operator=(const PowerFist& ref)
{
    AWeapon::operator=(ref);
    return (*this);
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}