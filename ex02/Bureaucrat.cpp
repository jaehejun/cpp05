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

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        if (form.getIsSigned() == true)
        {
            std::cout << form.getName() << " is already signed!" << std::endl;
            return;
        }
        form.beSigned(*this);
        std::cout << getName() << " signed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(const AForm &form)
{
    try
    {
        form.execute(*this);
        std::cout << getName() << " executed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << getName() << " attempts to execute " << form.getName() << " but " << e.what() << std::endl;
    }
}