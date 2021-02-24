/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:13:33 by hjung             #+#    #+#             */
/*   Updated: 2021/02/24 17:45:37 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name)
{
	this->_name = name;
	std::cout << this->_name << " Pony Constructor is called!" << '\n';
}

Pony::~Pony()
{
	std::cout << this->_name << " Pony Destructor is called!" << '\n';
}
