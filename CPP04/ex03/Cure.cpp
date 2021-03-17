#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure(): AMateria("cure")
{
	return ;
}

Cure::Cure(const Cure& ref): AMateria("cure")
{
    this->_xp = ref._xp;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure& Cure::operator=(const Cure& ref)
{
    this->_xp = ref._xp;
	this->_type = ref._type;
    return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Cure::clone() const
{
	Cure *t = new Cure(*this);
	return (t);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
