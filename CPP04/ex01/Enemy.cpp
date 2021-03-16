#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type)
{
	return ;
}

Enemy::Enemy(const Enemy& ref)
{
    *this = ref;
}

Enemy::~Enemy()
{
	return ;
}

Enemy& Enemy::operator=(const Enemy& ref)
{
    this->_hp = ref._hp;
    this->_type = ref._type;
    return (*this);
}

std::string Enemy::getType() const
{
	return (this->_type);
}

int Enemy::getHP() const
{
	return (this->_hp);   
}

void Enemy::setHP(int hp)
{
	this->_hp = hp;
	return ;  
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
	{
		if (_hp - damage >= 0)
			this->_hp -= damage;
		else
			this->_hp = 0;
	}	
	return ;
}