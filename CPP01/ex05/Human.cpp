/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 06:05:10 by hjung             #+#    #+#             */
/*   Updated: 2021/02/26 12:57:40 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

const Brain &Human::getBrain(void) const
{
	return (this->_brain);
}

std::string Human::identify(void) const
{
	return (this->_brain.identify());
}