#include "AForm.hpp"

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade Too Low!";
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade Too High!";
}

const char *AForm::FormIsNotSigned::what() const throw()
{
    return "Form is not signed!";
}

AForm::AForm(const std::string &name, const std::string &target, const int &gradeSign, const int &gradeExecute)
    : name(name), target(target), isSigned(false), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
    if (gradeSign < 1 || gradeExecute < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExecute > 150)
        throw GradeTooLowException();
}

AForm::~AForm()
{
}

const std::string AForm::getName() const
{
    return name;
}

bool AForm::getIsSigned() const
{
    return isSigned;
}

int AForm::getGradeSign() const
{
    return gradeSign;
}

int AForm::getGradeExecute() const
{
    return gradeExecute;
}

const std::string AForm::getTarget() const
{
    return target;
}

void AForm::beSigned(const Bureaucrat &par)
{
    if (par.getGrade() <= gradeSign)
        isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &outStream, const AForm &obj)
{
    std::cout << obj.getName() << ", AForm is signed: " << std::boolalpha << obj.getIsSigned()
              << ", grade required to sign: " << obj.getGradeSign()
              << ", grade required to execute: " << obj.getGradeExecute() << std::endl;
    return outStream;
}