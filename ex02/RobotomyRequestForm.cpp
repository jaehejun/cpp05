#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", "target", 1, 1)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other.getName(), other.getTarget(), 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    static_cast<void>(other);
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{

    if (getIsSigned() == true)
    {
        if (executor.getGrade() <= getGradeExecute())
        {
            std::cout << "whirrrrrrrrr" << std::endl;
            srand(static_cast<unsigned int>(time(0)));
            int result = rand() % 2;
            if (result == 0)
                std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
            else
                throw FailToRobotomize();
        }
        else
            throw GradeTooLowException();
    }
    else
        throw FormIsNotSigned();
}
