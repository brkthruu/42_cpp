#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(std::string const & type): _xp(0), _type(type)
{
	return ;
}

AMateria::AMateria(const AMateria& ref)
{
    *this = ref;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria& AMateria::operator=(const AMateria& ref)
{
	(void)ref;
    return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}


/* ************************************************************************** */