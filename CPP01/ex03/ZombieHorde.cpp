/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 04:41:23 by hjung             #+#    #+#             */
/*   Updated: 2021/02/27 19:54:19 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(const int N): _N(N)
{
	int			i;
	std::string	name;
	
	i = 0;
	this->_zombie = new Zombie[N];
	while (i < N)
	{
		name = randomChump();
		usleep(10);
		_zombie[i] = Zombie(name, "DefaultType");
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] _zombie;
}

std::string ZombieHorde::randomChump(void)
{
	std::string	name;

	srand(clock());
	name.clear();
	for(int i = 0; i < 5; i++)
	{
		name += rand()%26 + 'a';
	}
	return (name);
}

void	ZombieHorde::announce(void)
{
	int	i;

	i = 0;
	while (i < _N)
	{
		_zombie[i].announce();
		i++;
	}
}