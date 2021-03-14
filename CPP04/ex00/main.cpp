#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Jordi.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	
	// Sorcerer hjung;
	
	Jordi fortytwo("42");
	robert.polymorph(fortytwo);
	return 0;
}