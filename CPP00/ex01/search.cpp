/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 18:43:52 by hjung             #+#    #+#             */
/*   Updated: 2021/02/22 19:02:18 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string		truncStr(std::string str)
{
	str = str.erase(9, str.length() - 9);
	str.append(".");
	return (str);
}

void	preview_info(Contact *phonebook, int idx)
{
	std::string		firstname;
	std::string		lastname;
	std::string		nickname;

	std::cout << "|     Index| Firstname|  Lastname|  Nickname|" << std::endl;
	for (int i = 0; i < idx; i += 1)
	{
		firstname = phonebook[i].getFirstname();
		lastname = phonebook[i].getLastname();
		nickname = phonebook[i].getNickname();

		std::cout << "|" << std::setw(10) << i;
		firstname = (firstname.length() > 10) ? truncStr(firstname) : firstname;
		std::cout << "|" << std::setw(10) << firstname;

		lastname = (lastname.length() > 10) ? truncStr(lastname) : lastname;
		std::cout << "|" << std::setw(10) << lastname;

		nickname = (nickname.length() > 10) ? truncStr(nickname) : nickname;
		std::cout << "|" << std::setw(10) << nickname;
		std::cout << "|" << std::endl;
	}
}