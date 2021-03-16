#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 21, 5)
{
	return ;    
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& ref): AWeapon(ref)
{
	return ;    
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& ref)
{
    AWeapon::operator=(ref);
    return (*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}