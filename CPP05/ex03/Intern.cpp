#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern(const Intern& ref)
{
    *this = ref;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern& Intern::operator=(const Intern& ref)
{
    if (this == &ref)
        return (*this);
    return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form*   Intern::makeForm(std::string formName, std::string target)
{
    std::string targets[3] = 
    {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    Form       *forms[3];
    forms[0] = new ShrubberyCreationForm(target);
    forms[1] = new RobotomyRequestForm(target);
    forms[2] = new PresidentialPardonForm(target);

	Form       *result = 0;

    for (int i = 0; i < 3; i++)
    {
        if (formName == targets[i])
        {
            std::cout << "Intern creates " << formName << " form." << '\n';
            result = forms[i];
            continue;
        }
        delete forms[i];
    }
    if (result)
        return (result);
	else
    	throw Intern::InvalidTypeException();
    return nullptr;
}

const char* Intern::InvalidTypeException::what() const throw()
{
    return "InternExeption: Invalid Type";
}