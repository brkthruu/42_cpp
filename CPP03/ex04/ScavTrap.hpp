#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		static const int nbrChallenges = 5;
		static std::string questions[nbrChallenges];
	
	public:
		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap( ScavTrap const &ref );
		~ScavTrap();
		void			challengeNewcomer(void);
		ScavTrap &		operator=( ScavTrap const & rhs );

};

#endif /* ******************************************************** SCAVTRAP_H */