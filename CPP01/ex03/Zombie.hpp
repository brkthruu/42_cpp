/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 00:38:27 by hjung             #+#    #+#             */
/*   Updated: 2021/02/27 19:54:33 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include <unistd.h>

class Zombie
{
private:
	std::string _name;
	std::string _type;

public:
	Zombie();
	~Zombie();
	Zombie(std::string name, std::string type);
	void announce(void);
};

#endif