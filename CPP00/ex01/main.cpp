/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:04:35 by hjung             #+#    #+#             */
/*   Updated: 2021/02/22 17:43:12 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int main(void)
{
	Contact		phonebook[8];
	std::string	choice;

	while (1)
	{
		std::getline(std::cin, choice);
		std::cout << "You typed " << choice << '\n';
	}

	return (0);
}