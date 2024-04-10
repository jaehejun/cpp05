#include "RobotomyRequestForm.hpp"

const char *RobotomyRequestForm::FailToRobotomize::what() const throw()
{
    return "Failed to Robotomize!";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy", target, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
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
