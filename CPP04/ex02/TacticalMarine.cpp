#include "TacticalMarine.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine &ref)
{
	(TacticalMarine)ref;
    std::cout<<"Tactical Marine ready for battle!\n";
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TacticalMarine::~TacticalMarine()
{
    std::cout<<"Aaargh...\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

TacticalMarine& TacticalMarine::operator=(const TacticalMarine &ref)
{
	(TacticalMarine)ref;
    return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

TacticalMarine* TacticalMarine::clone() const
{
    TacticalMarine *copy = new TacticalMarine(*this);
    return (copy);
}

void TacticalMarine::battleCry() const
{
    std::cout<<"For the holy PLOT!\n";
}

void TacticalMarine::rangedAttack() const
{
    std::cout<<"* attacks with a bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *\n";    
}

/* ************************************************************************** */