/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 04:41:21 by hjung             #+#    #+#             */
/*   Updated: 2021/02/26 05:13:15 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie	*_zombie;
	int		_N;
	
public:
	ZombieHorde(const int N);
	~ZombieHorde();
	std::string	randomChump(void);
	void		announce(void);	
};

#endif