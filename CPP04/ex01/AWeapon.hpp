#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	public:
		AWeapon(std::string const & name, int damage, int apcost);
	    AWeapon(const AWeapon& ref);
		virtual ~AWeapon(void);
        AWeapon& operator=(const AWeapon& ref);
		std::string getName(void) const;
		int getAPCost(void) const;
		int getDamage(void) const;
		virtual void attack(void) const = 0;

	private:
		std::string     _name;
		int             _damage;
		int             _apcost;

};

std::ostream & operator<<(std::ostream & out, AWeapon const &aweapon);

#endif