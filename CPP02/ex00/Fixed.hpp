#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed(Fixed const &ref);
		~Fixed();

		Fixed&	operator=( Fixed const & ref );
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int	_value;
		static const int _bits = 8;


};

#endif /* *********************************************************** FIXED_H */