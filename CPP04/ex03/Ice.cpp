#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice(): AMateria("ice")
{
	return ;
}

Ice::Ice(const Ice& ref): AMateria("ice")
{
    this->_xp = ref._xp;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice& Ice::operator=(const Ice& ref)
{
    this->_xp = ref._xp;
	this->_type = ref._type;
    return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Ice::clone() const
{
	Ice *t = new Ice(*this);
	return (t);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
