#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class ScavTrap
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
		
		static const int nbrChallenges = 5;
		static std::string questions[nbrChallenges];
	
	public:
		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap( ScavTrap const &ref );
		~ScavTrap();
		unsigned int	rangedAttack(std::string const &target);
		unsigned int	meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(void);
		ScavTrap &		operator=( ScavTrap const & rhs );

};

#endif /* ******************************************************** SCAVTRAP_H */