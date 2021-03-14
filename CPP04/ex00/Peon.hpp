#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: public Victim
{

	public:

		Peon();
		Peon(std::string name);
		Peon( Peon const & src );
		~Peon();

		Peon &	operator=( Peon const & ref );
		void    getPolymorphed() const;

};

#endif /* ************************************************************ PEON_H */