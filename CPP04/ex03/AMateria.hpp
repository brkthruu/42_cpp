#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
	protected:
		unsigned int	_xp;
		std::string		_type;

	public:
		AMateria(std::string const & type);
		AMateria(const AMateria& ref);
		virtual ~AMateria();
		AMateria& operator=(AMateria const & ref);
		
		std::string const & getType() const;	//Returns the materia type
		unsigned int getXP() const;				//Returns the Materia's XP
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif /* ******************************************************** AMATERIA_H */