/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:02:09 by hjung             #+#    #+#             */
/*   Updated: 2021/02/22 18:47:59 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# define MAX_IDX 8

class Contact
{
private:
	int			_idx;
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_login;
	std::string	_postaladdress;
	std::string	_emailaddress;
    std::string	_phonenumber;
    std::string	_birthdaydate;
    std::string	_favoritemeal;
    std::string	_underwearcolor;
    std::string	_darkestsecret;
	
public:
	Contact(void);
	~Contact(void);
	
	void			inputInfo(int idx);
	std::string     getFirstname(void);
    std::string     getLastname(void);
    std::string     getNickname(void);
    std::string     getLogin(void);
    std::string     getPostaladdress(void);
    std::string     getEmailaddress(void);
    std::string     getPhonenumber(void);
    std::string     getBirthdaydate(void);
    std::string     getFavoritemeal(void);
    std::string     getUnderwearcolor(void);
    std::string     getDarkestsecret(void);
};

void	preview_info(Contact *phonebook, int idx);

#endif

