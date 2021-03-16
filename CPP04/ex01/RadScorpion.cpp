#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(const RadScorpion& ref): Enemy(ref)
{
	return ;    
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion& RadScorpion::operator=(const RadScorpion& ref)
{
    Enemy::operator=(ref);
    return (*this);
}