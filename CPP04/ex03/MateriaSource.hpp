#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria		*_inventory[4];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& ref);
		~MateriaSource(void);
		MateriaSource& operator=(MateriaSource const & ref);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
