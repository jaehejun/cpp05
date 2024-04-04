#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(1)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade) : name(name), grade(grade)
{
	std::cout << "Bureaucrat constructor called with NAME & GRADE" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name("Bureaucrat"), grade(other.grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	if (this != &other)
	{
		grade = other.grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incrementGrade(int upGrade)
{
	this->grade -= upGrade;
	if (grade < 1)
		std::cout << "lowException" << std::endl;
}

void Bureaucrat::decrementGrade(int downGrade)
{
	this->grade += downGrade;
	if (grade > 150)
		std::cout << "highException" << std::endl;
}

std::ostream &operator<<(std::ostream &outStream, const Bureaucrat &obj)
{
	std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl; 
	return outStream;
}