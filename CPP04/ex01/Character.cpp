/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 11:23:49 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 15:19:55 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _name(name), _ap(40)
{
	return ;
}

Character::Character(const Character& ref)
{
    *this = ref;
}

Character::~Character(void)
{
	return ;
}

Character& Character::operator=(const Character& ref)
{
    this->_name = ref._name;
    this->_ap = ref._ap;
	this->_weapon = ref._weapon;
    return (*this);
}

void Character::recoverAP(void)
{
	if (this->_ap > 30)
		this->_ap = 40;
	else
		this->_ap += 10;
	return ;
}

void Character::equip(AWeapon* aweapon)
{
	this->_weapon = aweapon;
	return ;
}

void Character::attack(Enemy* enemy)
{
	if (this->_weapon)
	{
		if (this->_ap > _weapon->getAPCost())
		{
			std::cout << _name << " attacks " << enemy->getType() << " with a " 
				<< this->_weapon->getName() << std::endl;
			this->_ap -= _weapon->getAPCost();
			this->_weapon->attack();
			enemy->takeDamage(this->_weapon->getDamage());
			if (enemy->getHP() <= 0)
				delete enemy;
		}
	}
	return ;
}

std::string  Character::getName(void) const
{
	return (this->_name);
}

int          Character::getAP(void) const
{
	return (this->_ap);
}

AWeapon    * Character::getWeapon(void) const
{
	return (this->_weapon);
}

std::ostream    & operator<<(std::ostream & out, Character const & rhs)
{
	out << rhs.getName() << " has " << rhs.getAP() << " AP and "; 
	if (rhs.getWeapon())
		out << "wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		out << "is unarmed" << std::endl;
	return (out);
}
