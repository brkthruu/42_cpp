#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(const PowerFist& ref);
		~PowerFist(void);
		PowerFist& operator=(const PowerFist& ref);
		void attack(void) const;
};

#endif