#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <ctime>
# include <unistd.h>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
		static const int nbrWeapons = 5;
		static std::string attack[nbrWeapons];

	public:
		FragTrap();
		FragTrap(std::string const name);
		FragTrap( FragTrap const &ref );
		virtual ~FragTrap();
		unsigned int	vaulthunter_dot_exe(std::string const &target);
		FragTrap &		operator=( FragTrap const &ref );

};

#endif /* ******************************************************** FRAGTRAP_H */