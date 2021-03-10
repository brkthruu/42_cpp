/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:37:44 by hjung             #+#    #+#             */
/*   Updated: 2021/03/10 23:38:21 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	FragTrap amy("AMY");
	ScavTrap bob("BOB");
	NinjaTrap wayne("WAYNE");
	SuperTrap superman("Clark");

	amy.display();
	bob.display();
	wayne.display();
	superman.display();

	std::cout << "\n======BATTLE STARTED======" << std::endl;
	bob.takeDamage(amy.meleeAttack("BOB"));
	amy.takeDamage(bob.rangedAttack("AMY"));
	bob.beRepaired(40);
	amy.beRepaired(40);
	bob.takeDamage(amy.vaulthunter_dot_exe("BOB"));
	wayne.takeDamage(amy.vaulthunter_dot_exe("WAYNE"));
	bob.challengeNewcomer();
	wayne.ninjaShoebox(amy);
	wayne.ninjaShoebox(bob);
	wayne.ninjaShoebox(wayne);

	amy.takeDamage(superman.rangedAttack("AMY"));
	amy.takeDamage(superman.meleeAttack("AMY"));

	std::cout << "\n======After battle======" << std::endl;
	amy.display();
	bob.display();
	wayne.display();
	superman.display();
	std::cout << std::endl;

	return (0);
}