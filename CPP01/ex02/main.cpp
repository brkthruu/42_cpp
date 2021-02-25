/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 01:54:36 by hjung             #+#    #+#             */
/*   Updated: 2021/02/25 13:44:21 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
	std::cout << "---- Zombie ----" << '\n';
	Zombie	zombie1;
	Zombie	zombie2("IronMan", "HERO");
	Zombie	zombie3("Thanos", "VILLAIN");

	zombie1.announce();
	zombie2.announce();
	zombie3.announce();

	std::cout << "---- ZombieEvent ----" << '\n';
	ZombieEvent	ze1;
	ze1.setZombieType("HERO");
	Zombie	*zombie4 = ze1.newZombie("hjung");
	zombie4->announce();
	delete(zombie4);

	ZombieEvent	ze2;
	ze2.setZombieType("VILLAIN");
	Zombie	*zombie5 = ze2.randomChump();
	delete(zombie5);
	
	return (0);
}
