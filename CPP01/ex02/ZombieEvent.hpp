/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 02:10:25 by hjung             #+#    #+#             */
/*   Updated: 2021/02/26 05:24:21 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	_type;

public:
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name);
	Zombie*	randomChump(void);
};

#endif



