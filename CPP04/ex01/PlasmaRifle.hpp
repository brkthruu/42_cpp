#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		PlasmaRifle(const PlasmaRifle& ref);
		~PlasmaRifle(void);
		PlasmaRifle& operator=(const PlasmaRifle& ref);
		void attack(void) const;
};

#endif