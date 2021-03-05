#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <unistd.h>

class FragTrap
{
	private:
		std::string name;
		int level;
		int hitPoints;
		int maxHitPoints;
		int energyPoints;
		int maxEnergyPoints;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageReduction;

		static const int nbrQuotes = 5;
		static std::string attack[nbrQuotes];

	public:
		FragTrap();
		FragTrap(std::string const name);
		FragTrap( FragTrap const &ref );
		~FragTrap();
		unsigned int	rangedAttack(std::string const &target);
		unsigned int	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		unsigned int	vaulthunter_dot_exe(std::string const &target);
		FragTrap &		operator=( FragTrap const & rhs );

};

#endif /* ******************************************************** FRAGTRAP_H */