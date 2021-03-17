#include "AssaultTerminator.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AssaultTerminator::AssaultTerminator()
{
    std::cout<<"* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &ref)
{
	std::cout<<"* teleports from space *\n";
	*this = ref;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AssaultTerminator::~AssaultTerminator()
{
	std::cout<<"I'll be back...\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator &ref)
{
    (AssaultTerminator)ref;    
    return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AssaultTerminator* AssaultTerminator::clone() const
{
    AssaultTerminator *copy = new AssaultTerminator(*this);
    return (copy);
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!\n";
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *\n";    
}

/* ************************************************************************** */