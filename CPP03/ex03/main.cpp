/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:37:44 by hjung             #+#    #+#             */
/*   Updated: 2021/03/10 16:22:19 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int main()
{
	/*
	FragTrap amy("AMY");
	FragTrap bob("BOB");

	bob.takeDamage(amy.rangedAttack("Bob"));
	bob.takeDamage(amy.meleeAttack("Bob"));
	bob.beRepaired(5);
	bob.beRepaired(50);
	std::cout << "========random attack========\n";
	amy.takeDamage(bob.vaulthunter_dot_exe("Amy"));
	amy.takeDamage(bob.vaulthunter_dot_exe("Amy"));
	amy.takeDamage(bob.vaulthunter_dot_exe("Amy"));
	amy.takeDamage(bob.vaulthunter_dot_exe("Amy"));
	amy.takeDamage(bob.vaulthunter_dot_exe("Amy"));
	amy.takeDamage(bob.vaulthunter_dot_exe("Amy"));

	std::cout << "\n========Challenging new comer========\n";
	ScavTrap cat("CAT");
	ScavTrap dog("DOG");
	cat.challengeNewcomer();
	dog.takeDamage(cat.rangedAttack("DOG"));
	dog.takeDamage(cat.meleeAttack("DOG"));
	dog.beRepaired(50);
	dog.beRepaired(125);
	for(int i = 1; i <= 3; i++)
	{
		usleep(10);
		cat.challengeNewcomer();
	}
	*/
	FragTrap amy("AMY");
	ScavTrap bob("BOB");
	ClapTrap cat("CAT");
	NinjaTrap wayne("WAYNE");
	NinjaTrap joker("JOKER");

	wayne.ninjaShoebox(amy);
	wayne.ninjaShoebox(bob);
	wayne.ninjaShoebox(cat);
	wayne.ninjaShoebox(joker);

	return (0);
}