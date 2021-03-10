#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{

	public:

		SuperTrap(std::string const name);
		SuperTrap( SuperTrap const &ref );
		virtual ~SuperTrap();
		void show_data(void);

		SuperTrap &		operator=( SuperTrap const &ref );

};

#endif /* ******************************************************* SUPERTRAP_H */