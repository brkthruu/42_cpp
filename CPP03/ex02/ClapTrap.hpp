#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		std::string name;
		int level;
		int hitPoints;
		int maxHitPoints;
		int energyPoints;
		int maxEnergyPoints;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageReduction;

	public:

		ClapTrap();
		ClapTrap(std::string const name);
		ClapTrap( ClapTrap const &ref );
		~ClapTrap();
		unsigned int	rangedAttack(std::string const &target);
		unsigned int    meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		ClapTrap &		operator=( ClapTrap const & rhs );

};

#endif /* ******************************************************** CLAPTRAP_H */