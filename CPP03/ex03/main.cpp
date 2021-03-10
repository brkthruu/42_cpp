/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:37:44 by hjung             #+#    #+#             */
/*   Updated: 2021/03/10 15:26:22 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int main()
{
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