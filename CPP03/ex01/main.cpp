/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:40:20 by hjung             #+#    #+#             */
/*   Updated: 2021/03/07 23:33:26 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap amy("Amy");
	FragTrap bob("Bob");
	FragTrap frag("FR4G");
	ScavTrap scav("SC4V");

	bob.takeDamage(amy.rangedAttack("Bob"));
	bob.takeDamage(amy.meleeAttack("Bob"));
	bob.beRepaired(5);
	bob.beRepaired(50);
	std::cout << "--------random attact--------\n";
	amy.takeDamage(bob.vaulthunter_dot_exe("Amy"));
	amy.takeDamage(bob.vaulthunter_dot_exe("Amy"));
	amy.takeDamage(bob.vaulthunter_dot_exe("Amy"));
	amy.takeDamage(bob.vaulthunter_dot_exe("Amy"));
	amy.takeDamage(bob.vaulthunter_dot_exe("Amy"));
	amy.takeDamage(bob.vaulthunter_dot_exe("Amy"));

	std::cout << "-----\nScavTrap\n-----" << std::endl;

	scav.challengeNewcomer();
	frag.takeDamage(scav.rangedAttack("FR4G"));
	frag.takeDamage(scav.meleeAttack("FR4G"));
	frag.beRepaired(50);
	scav.beRepaired(125);
	for(int i = 1; i <= 3; i++)
	{
		usleep(10);
		scav.challengeNewcomer();
	}
	return (0);
}