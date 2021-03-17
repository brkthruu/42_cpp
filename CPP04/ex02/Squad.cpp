#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad() : count(0), units(nullptr)
{

}

Squad::Squad(Squad const &other): count(0), units(nullptr)
{
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad& Squad::operator=(const Squad& ref)
{
	int		i;

	if (this->units != NULL)
    {
		i = -1;
		while (++i < this->getCount())
            delete this->units[i];
        delete[] this->units;
    }

	this->count = ref.getCount();
    this->units = new ISpaceMarine*[ref.getCount()];
	i = -1;
    while (++i < ref.getCount())
        this->units[i] = ref.getUnit(i)->clone();
    return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int Squad::getCount(void) const
{
	return (count);
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (!count || index<0 || count<=index)
		return (nullptr);
	return (units[index]);
}

int Squad::push(ISpaceMarine *unit)
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			if (this->units[i] == unit)
				return (this->count);
		
		ISpaceMarine **cpy = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			cpy[i] = this->units[i];
		delete[] this->units;
		this->units = cpy;
		this->units[this->count] = unit;
		this->count++;
	}

	else
	{
		this->units = new ISpaceMarine*[1];
		this->units[0] = unit;
		this->count = 1;
	}
	return (this->count);
}

/* ************************************************************************** */