#include "Peon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peon::Peon(std::string name) : Victim(name)
{
    std::cout <<"Zog zog.\n";
}

Peon::Peon( const Peon &ref ): Victim(ref.name)
{
	std::cout <<"Zog zog.\n";
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon()
{
	std::cout<<"Bleuark...\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Peon &				Peon::operator=( Peon const & ref )
{
	this->name = ref.name;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void    Peon::getPolymorphed() const
{
	std::cout<<name<<" has been turned into a pink pony!\n";
}

/* ************************************************************************** */