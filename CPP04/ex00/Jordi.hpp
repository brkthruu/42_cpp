#ifndef JORDI_HPP
# define JORDI_HPP

# include "Victim.hpp"

class Jordi: public Victim
{

	public:

		Jordi();
		Jordi(std::string name);
		Jordi( Jordi const & src );
		~Jordi();

		Jordi &	operator=( Jordi const & ref );
		void    getPolymorphed() const;

};

#endif /* ************************************************************ JORDI_H */