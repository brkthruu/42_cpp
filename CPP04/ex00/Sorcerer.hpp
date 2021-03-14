#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
	protected:
		std::string	name;
		std::string	title;

	public:

		Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer( Sorcerer const &ref);
		~Sorcerer();

		Sorcerer &	operator=( Sorcerer const &ref );
		std::string getName() const;
		std::string getTitle() const;
		void		polymorph(Victim const &ref) const;

};

std::ostream &			operator<<( std::ostream & out, Sorcerer const & ref );

#endif /* ******************************************************** SORCERER_H */