#include "Sorcerer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
    std::cout << name << ", " << title << ", is born!\n";
}

Sorcerer::Sorcerer( const Sorcerer &ref )
{
	*this = ref;
	std::cout << name << ", " << title << ", is born!\n";
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequenced will never be the same!\n";
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer &				Sorcerer::operator=( Sorcerer const & ref )
{
	name = ref.name;
	title = ref.title;
    return (*this);
}

std::ostream &			operator<<( std::ostream & out, Sorcerer const &ref)
{
	out << "I am " << ref.getName() << ", " << ref.getTitle() << ", and I like ponies!\n";
	return (out);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Sorcerer::getName() const
{
	return (name);
}

std::string Sorcerer::getTitle() const
{
	return (title);
}

void	Sorcerer::polymorph(Victim const &ref) const
{
	ref.getPolymorphed();
}

/* ************************************************************************** */