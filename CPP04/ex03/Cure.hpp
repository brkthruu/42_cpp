#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& ref);
		virtual ~Cure();
		Cure& operator=(Cure const & ref);
		
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
