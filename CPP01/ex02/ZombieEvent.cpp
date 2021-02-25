/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 02:10:28 by hjung             #+#    #+#             */
/*   Updated: 2021/02/25 13:09:43 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->_type = "no type";
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return( new Zombie(name, _type) );
}

void	ZombieEvent::randomChump(void)
{
	Zombie *zombie;
	std::string n[] = {"kycho", "jakang", "jinbkim", "seobaek", "yapark"};

	srand(clock());
	zombie = this->newZombie(n[rand() % 5]);
	zombie->announce();
	delete (zombie);
}