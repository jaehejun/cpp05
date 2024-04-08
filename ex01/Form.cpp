#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Form"), isSigned(false), gradeSign(1), gradeExecute(1)
{
}

Form::Form(const std::string &name, const int &gradeSign, const int &gradeExecute)
    : name(name), isSigned(false), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
    if (gradeSign < 1 || gradeExecute < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other)
    : name(other.name), isSigned(other.isSigned), gradeSign(other.gradeSign), gradeExecute(other.gradeExecute)
{
}

Form::~Form()
{
}

Form &Form::operator=(const Form &other)
{
    if (this != &other)
    {
        isSigned = other.isSigned;
    }
	return *this;
}

const std::string Form::getName() const
{
    return name;
}

bool Form::getIsSigned() const
{
    return isSigned;
}

int Form::getGradeSign() const
{
    return gradeSign;
}

int Form::getGradeExecute() const
{
    return gradeExecute;
}

void Form::beSigned(const Bureaucrat &par)
{
    if (par.getGrade() <= gradeSign)
        isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &outStream, const Form &obj)
{
    std::cout << obj.getName() << ", Form is signed: " << std::boolalpha << obj.getIsSigned()
              << ", grade required to sign: " << obj.getGradeSign()
              << ", grade required to execute: " << obj.getGradeExecute() << std::endl;
    return outStream;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low!";
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High!";
}