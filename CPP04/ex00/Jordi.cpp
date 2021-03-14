#include "Jordi.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Jordi::Jordi(std::string name) : Victim(name)
{
    std::cout <<"Zog zog.\n";
}

Jordi::Jordi( const Jordi &ref ): Victim(ref.name)
{
	std::cout <<"Zog zog.\n";
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Jordi::~Jordi()
{
	std::cout<<"Bleuark...\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Jordi &				Jordi::operator=( Jordi const & ref )
{
	this->name = ref.name;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void    Jordi::getPolymorphed() const
{
	std::cout<<name<<" became 42 pony!\n";
}

/* ************************************************************************** */