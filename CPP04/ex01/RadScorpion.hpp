#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(const RadScorpion& ref);
		~RadScorpion(void);
		RadScorpion& operator=(const RadScorpion& ref);
};

#endif