/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 20:01:16 by jakang            #+#    #+#             */
/*   Updated: 2021/03/17 00:46:55 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string     _name;
		int             _ap;
		AWeapon         *_weapon;

	public:
		Character(std::string const & name);
		Character(const Character& ref);
		~Character();
		Character   & operator=(Character const & ref);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string  getName() const;
		int          getAP() const;
		AWeapon      *getWeapon() const;
};

std::ostream    & operator<<(std::ostream & out, Character const & rhs);

#endif