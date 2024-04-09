#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("default", "target", 1, 1)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Presidential", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
    : Form(other.getName(), other.getTarget(), 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    static_cast<void>(other);
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{

    if (getIsSigned() == true)
    {
        if (executor.getGrade() <= getGradeExecute())
            std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
        else
            throw GradeTooLowException();
    }
    else
        throw FormIsNotSigned();
}
