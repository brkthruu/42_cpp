#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int damage, int apcost): _name(name), _damage(damage), _apcost(apcost)
{
	return ;
}

AWeapon::AWeapon(const AWeapon& ref)
{
    *this = ref;
}

AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon& AWeapon::operator=(const AWeapon& ref)
{
    this->_name = ref._name;
    this->_damage = ref._damage;
    this->_apcost = ref._apcost;
    return (*this);
}

std::string AWeapon::getName(void) const
{
	return (this->_name);
}

int AWeapon::getDamage(void) const
{
	return (this->_damage);
}

int AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}