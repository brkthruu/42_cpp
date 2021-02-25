/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 00:36:50 by hjung             #+#    #+#             */
/*   Updated: 2021/02/25 02:07:13 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "no name";
	_type = "no type";
}

Zombie::~Zombie()
{
	return ;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
    this->_type = type;
}

void	Zombie::announce(void)
{
	std::string     str;

	str = "<" + _name + " (" + _type + ")> ";
	std::cout << str << "Braiiiiiiinnnssss..." << '\n';
}