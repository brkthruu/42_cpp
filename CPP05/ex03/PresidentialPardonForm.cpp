#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref) : Form(ref), _target(ref._target)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
    if (this == &ref)
        return (*this);
    Form::operator=(ref);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
    std::cout << _target << " has been pardoned by Zafod Beeblebrox." << '\n';
}