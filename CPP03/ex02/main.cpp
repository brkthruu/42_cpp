/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:37:44 by hjung             #+#    #+#             */
/*   Updated: 2021/03/10 14:41:43 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
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

	std::cout << "\n========Testing Copy Constructor========\n";
	FragTrap copiedAmy(amy);
	ScavTrap copiedDog(dog);

	copiedDog.takeDamage(copiedAmy.vaulthunter_dot_exe("Dog"));
	return (0);
}