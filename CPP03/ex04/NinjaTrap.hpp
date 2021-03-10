#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{

	public:

		NinjaTrap();
		NinjaTrap(std::string const name);
		NinjaTrap( NinjaTrap const & ref);
		virtual ~NinjaTrap();
		void ninjaShoebox(FragTrap &trap);
		void ninjaShoebox(ScavTrap &trap);
		void ninjaShoebox(ClapTrap &trap);
		void ninjaShoebox(NinjaTrap &trap);

		NinjaTrap &		operator=( NinjaTrap const & ref);

};

#endif /* ******************************************************* NINJATRAP_H */