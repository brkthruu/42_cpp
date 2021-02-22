/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:03:44 by hjung             #+#    #+#             */
/*   Updated: 2021/02/22 19:05:06 by hjung            ###   ########.fr       */
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

void	Contact::inputInfo(int idx){
	_idx = idx;
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

std::string	Contact::getFirstname(void)
{
	return (this->_firstname);
}

std::string	Contact::getLastname(void)
{
	return (this->_lastname);
}

std::string	Contact::getNickname(void)
{
	return (this->_nickname);
}

std::string	Contact::getLogin(void)
{
	return (this->_login);
}

std::string	Contact::getPostaladdress(void)
{
	return (this->_postaladdress);
}

std::string	Contact::getEmailaddress(void)
{
	return (this->_emailaddress);
}

std::string	Contact::getPhonenumber(void)
{
	return (this->_phonenumber);
}

std::string	Contact::getBirthdaydate(void)
{
	return (this->_birthdaydate);
}

std::string	Contact::getFavoritemeal(void)
{
	return (this->_favoritemeal);
}

std::string	Contact::getUnderwearcolor(void)
{
	return (this->_underwearcolor);
}

std::string	Contact::getDarkestsecret(void)
{
	return (this->_darkestsecret);
}