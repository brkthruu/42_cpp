/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:40:28 by hjung             #+#    #+#             */
/*   Updated: 2021/03/02 13:40:28 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << '\n';
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << '\n';
	this->_value = value << Fixed::_bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << '\n';
	this->_value = roundf(value * (1 << Fixed::_bits));
}

Fixed::Fixed( const Fixed& ref)
{
	std::cout << "Copy constructor called" << '\n';
	this->_value = ref.getRawBits();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << '\n';
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed	&Fixed::operator=( Fixed const &ref )
{
	std::cout << "Assignation operator called" << '\n';
	this->_value = ref.getRawBits();
	return *this;
}

std::ostream	&operator<<( std::ostream &out, Fixed const &ref )
{
	out << ref.toFloat();
	return out;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << Fixed::_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_bits);
}

/* ************************************************************************** */