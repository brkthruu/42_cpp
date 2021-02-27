/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 15:34:30 by hjung             #+#    #+#             */
/*   Updated: 2021/02/27 15:52:13 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon&		_weapon;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack(void);

};

#endif