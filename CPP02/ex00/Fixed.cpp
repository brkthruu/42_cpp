#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << '\n';
}

Fixed::Fixed(const Fixed& ref)
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

/*
** --------------------------------- METHODS ----------------------------------
*/
int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << '\n';
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

/* ************************************************************************** */