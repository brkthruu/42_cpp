/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:40:30 by hjung             #+#    #+#             */
/*   Updated: 2021/03/03 05:26:33 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const &ref);
		~Fixed();

		Fixed	&operator=( Fixed const & ref );
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int	_value;
		static const int _bits = 8;


};

std::ostream	&operator<<( std::ostream &out, Fixed const &ref );

#endif /* *********************************************************** FIXED_H */