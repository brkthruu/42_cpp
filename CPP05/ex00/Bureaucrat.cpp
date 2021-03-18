#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(const std::string &name, int grade) :_name(name), _grade(grade)
{
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150) 
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref) : _name(ref.getName()), _grade(ref.getGrade())
{
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
    if (this == &ref)
        return (*this);
    _grade = ref.getGrade();
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    return (*this);
}

std::ostream&   operator<<(std::ostream &os, const Bureaucrat &ref)
{
    return (os << ref.getName() << ", bureaucrat grade " << ref.getGrade() << std::endl);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string         Bureaucrat::getName() const
{
    return (_name);
}

int                 Bureaucrat::getGrade() const
{
    return (_grade);
}

void            Bureaucrat::upGrade()
{
    if (_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    _grade -= 1;
}

void            Bureaucrat::downGrade()
{
    if (_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    _grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BureaucratException: Grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BureaucratException: Grade too Low");
}
