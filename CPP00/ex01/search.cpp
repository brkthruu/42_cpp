/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 18:43:52 by hjung             #+#    #+#             */
/*   Updated: 2021/02/22 19:42:53 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void			search_contact(Contact phonebook[], int n)
{
	int          idx;

	std::cout << "Enter the index of a contact: ";
	std::cin >> idx;
	if (std::cin.eof())
		exit(1);
	if (idx >= 0 && idx < n)
	{
		std::cout << phonebook[idx].getFirstname() << '\n';
		std::cout << phonebook[idx].getLastname() << '\n';
		std::cout << phonebook[idx].getNickname() << '\n';
		std::cout << phonebook[idx].getLogin() << '\n';
		std::cout << phonebook[idx].getPostaladdress() << '\n';
		std::cout << phonebook[idx].getEmailaddress() << '\n';
		std::cout << phonebook[idx].getPhonenumber() << '\n';
		std::cout << phonebook[idx].getBirthdaydate() << '\n';
		std::cout << phonebook[idx].getFavoritemeal() << '\n';
		std::cout << phonebook[idx].getUnderwearcolor() << '\n';
		std::cout << phonebook[idx].getDarkestsecret() << '\n';
	}
	else
	{
		std::cout << "[ERROR] Cannot find right data" << '\n';
	}
	std::cin.ignore();
}

std::string		trunc_str(std::string str)
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

	std::cout << "|     Index| Firstname|  Lastname|  Nickname|" << '\n';
	for (int i = 0; i < idx; i += 1)
	{
		firstname = phonebook[i].getFirstname();
		lastname = phonebook[i].getLastname();
		nickname = phonebook[i].getNickname();

		std::cout << "|" << std::setw(10) << i;
		firstname = (firstname.length() > 10) ? trunc_str(firstname) : firstname;
		std::cout << "|" << std::setw(10) << firstname;

		lastname = (lastname.length() > 10) ? trunc_str(lastname) : lastname;
		std::cout << "|" << std::setw(10) << lastname;

		nickname = (nickname.length() > 10) ? trunc_str(nickname) : nickname;
		std::cout << "|" << std::setw(10) << nickname;
		std::cout << "|" << std::endl;
	}
	search_contact(phonebook, idx);
}