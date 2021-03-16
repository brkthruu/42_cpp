#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(const SuperMutant& ref);
		~SuperMutant(void);
		SuperMutant& operator=(const SuperMutant& ref);
		void    takeDamage(int amount);
};

#endif