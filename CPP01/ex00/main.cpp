/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 16:29:07 by hjung             #+#    #+#             */
/*   Updated: 2021/02/27 19:53:10 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(const char *str)
{
	Pony *pony = new Pony(str);
	delete pony;
}

void	ponyOnTheStack(const char *str)
{
	Pony pony(str);
}

int main(void)
{
	std::cout << "----- ponyOnTheHeap -----" << '\n';
	ponyOnTheHeap("ponyAAA");
	ponyOnTheHeap("ponyBBB");

	std::cout << "----- ponyOnTheStack -----" << '\n';
	ponyOnTheStack("ponyCCC");
	ponyOnTheStack("ponyDDD");

	return (0);
}
