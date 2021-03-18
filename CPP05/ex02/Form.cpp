#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name, int signGrade, int executeGrade) :_name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
    if (_signGrade < 1 || _executeGrade < 1)
        throw Form::GradeTooHighException();
	else if (_signGrade > 150 || _executeGrade > 150)
        throw Form::GradeTooLowException();
}


Form::Form(const Form& ref) : _name(ref.getName()), _signed(getSigned()), _signGrade(ref.getSignGrade()), _executeGrade(ref.getExecuteGrade())
{
	if (_signGrade < 1 || _executeGrade < 1)
        throw Form::GradeTooHighException();
	else if (_signGrade > 150 || _executeGrade > 150)
        throw Form::GradeTooLowException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form& Form::operator=(const Form& ref)
{
    if (this == &ref)
        return (*this);
    if (_signGrade < 1 || _executeGrade < 1)
        throw Form::GradeTooHighException();
	else if (_signGrade > 150 || _executeGrade > 150)
        throw Form::GradeTooLowException();
    return (*this);
}

std::ostream&   operator<<(std::ostream &os, const Form &ref)
{
    return (os << ref.getName() << 
        ", sign status " << ref.getSigned() << 
        ", sign grade " << ref.getSignGrade() << 
        ", execute grade " << ref.getExecuteGrade() << std::endl); 
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void                Form::execute(Bureaucrat const & executor) const
{
    if (_signed == false)  // sign이 안되있으면 
        throw Form::NotSignedException();  // NotSignedExceptionn클래스를 catch로 던짐
    else if (executor.getGrade() > _executeGrade)  // 객체 인자의 등급이 기준이되는 executeGrade 보다 낮으면
        throw Form::GradeTooLowException();  // GradeTooLowException클래스를 catch로 던짐
}

std::string         Form::getName() const
{
    return (_name);
}


bool                Form::getSigned() const
{
    return (_signed);
}

int                 Form::getSignGrade() const
{
    return (_signGrade);
}

int                 Form::getExecuteGrade() const
{
    return (_executeGrade);
}


void                Form::beSigned(Bureaucrat& ref)
{
    if (_signGrade > ref.getGrade())
        _signed = true;
    else
        throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("FormException: Grade too High");
}


const char* Form::GradeTooLowException::what() const throw()
{
	return ("FormException: Grade too Low");
}

const char* Form::NotSignedException::what() const throw()
{
	return ("FormException: Not Signed");
}
