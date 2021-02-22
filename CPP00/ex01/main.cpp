/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:04:35 by hjung             #+#    #+#             */
/*   Updated: 2021/02/22 19:35:49 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int main(void)
{
	Contact		phonebook[8];
	std::string	choice;
	int			idx;

	idx = 0;
	while (1)
	{
		std::cout << "Enter the command" << '\n';
		std::getline(std::cin, choice, '\n');
		if (std::cin.eof())
			return (-1);
		if (choice == "EXIT")
			break;
		else if (choice == "ADD")
		{
			if (idx < MAX_IDX)
			{
				phonebook[idx].inputInfo(idx);	
				idx++;
			}
			else
				std::cout << "=> PHONEBOOK IS FULL!!" << '\n';
		}
		else if (choice == "SEARCH")
		{
			if (idx > 0)
				preview_info(phonebook, idx);
			else
				std::cout << "[ERROR] No contact exists" << '\n';
		}
		else
			std::cout << "=> INVALID OPTION" << '\n';

		std::cin.clear();
	}
	return (0);
}