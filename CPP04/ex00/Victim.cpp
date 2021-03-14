#include "Victim.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Victim::Victim(std::string name) : name(name)
{
	std::cout <<"Some random victim called "<< name <<" just appeared!\n";
}

Victim::Victim(const Victim &ref)
{
    *this = ref;
	std::cout <<"Some random victim called "<< name <<" just appeared!\n";
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim()
{
	std::cout <<"Victim "<< name <<" just died for no apparent reason!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim &				Victim::operator=( Victim const & ref )
{
	name = ref.name;
	return *this;
}

std::ostream &			operator<<( std::ostream & out, Victim const &ref )
{
	out << "I am "<< ref.getName() << " and I like otters!\n";
	return (out);
}


/*
** --------------------------------- METHODS ----------------------------------
*/
std::string Victim::getName() const
{
    return (name);
}

void        Victim::getPolymorphed() const
{
    std::cout<< name <<" has been turned into a cute little sheep!\n";
}

/* ************************************************************************** */