/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:02:09 by hjung             #+#    #+#             */
/*   Updated: 2021/02/22 17:36:57 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# define MAX_SIZE 8

class Contact
{
private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_login;
	std::string	_postaladdress;
	std::string	_emailadress;
    std::string	_phonenumber;
    std::string	_birthdaydate;
    std::string	_favoritemeal;
    std::string	_underwearcolor;
    std::string	_darkestsecret;
	
public:
	Contact(void);
	~Contact(void);
	/* 연락처 추가 */
	/* 간단 버전 연락처 출력 */
	void	show_contact(void)
	{
		std::cout << _firstname << '\n';
	}
	/* 연락처 검색 */
};

#endif

