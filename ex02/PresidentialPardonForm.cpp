#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential", target, 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
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
