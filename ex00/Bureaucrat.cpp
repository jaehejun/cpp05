#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low!";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High!";
}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade) : name(name), grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

const std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementGrade()
{
    if (grade <= 1)
        throw GradeTooHighException();
    grade -= 1;
}

void Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw GradeTooLowException();
    grade += 1;
}

std::ostream &operator<<(std::ostream &outStream, const Bureaucrat &obj)
{
    std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return outStream;
}