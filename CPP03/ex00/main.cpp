/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:39:05 by hjung             #+#    #+#             */
/*   Updated: 2021/03/05 12:23:54 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap amy("Amy");
	FragTrap bob("Bob");

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

	return (0);
}