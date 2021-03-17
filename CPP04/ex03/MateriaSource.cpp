#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
    int     i;

    i = -1;
    while(++i < 4)
        this->_inventory[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& ref)
{
    int     i;

    i = -1;
    while(++i < 4)
    {
        if (ref._inventory[i] == 0)
            this->_inventory[i] = 0;
        else
            this->_inventory[i]  = ref._inventory[i]->clone();
    }
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource& MateriaSource::operator=(const MateriaSource& ref)
{
    int     i;

    i = -1;
    while(++i < 4)
    {
        if (ref._inventory[i] == 0)
            this->_inventory[i] = 0;
        else
            this->_inventory[i]  = ref._inventory[i]->clone();
    }
    return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria *amateria)
{
    int     i;

    i = -1;
    while(++i < 4)
    {   
        if (this->_inventory[i] == 0)
        {
            this->_inventory[i] = amateria;
            return ;
        }
    }
    std::cout << "No more space" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int     i;

    i = -1;
    while(++i < 4)
    {   
        if (this->_inventory[i]->getType() == type)
            return (this->_inventory[i]);
    }    
    std::cout << "Unknown type" << std::endl;
    return (nullptr);
}
