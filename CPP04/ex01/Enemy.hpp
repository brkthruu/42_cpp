#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	public:
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy& ref);
		virtual ~Enemy();
		Enemy& operator=(const Enemy& ref);
		std::string getType() const;
		int getHP() const;
		void setHP(int);
		virtual void takeDamage(int);

	private:
		int         _hp;
		std::string _type;
};

#endif