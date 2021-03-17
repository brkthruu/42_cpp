#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& ref);
		virtual ~Ice();
		Ice& operator=(Ice const & ref);
		
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif