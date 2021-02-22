/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:03:44 by hjung             #+#    #+#             */
/*   Updated: 2021/02/22 18:08:31 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::input_info(void){
	std::cout << "firstname : ";
	std::getline(std::cin, _firstname);
	std::cout << "lastname : ";
	std::getline(std::cin, _lastname);
	std::cout << "nickname : ";
	std::getline(std::cin, _nickname);
	std::cout << "login : ";
	std::getline(std::cin, _login);
	std::cout << "postaladdress : ";
	std::getline(std::cin, _postaladdress);
	std::cout << "emailaddress : ";
	std::getline(std::cin, _emailaddress);
	std::cout << "phonenumber : ";
	std::getline(std::cin, _phonenumber);
	std::cout << "favoritemeal : ";
	std::getline(std::cin, _favoritemeal);
	std::cout << "underwearcolor : ";
	std::getline(std::cin, _underwearcolor);
	std::cout << "darkestsecret : ";
	std::getline(std::cin, _darkestsecret);
}