#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string	Brain::identify() const
{
	std::ostringstream	address;

	address << this;
	return (address.str());
}