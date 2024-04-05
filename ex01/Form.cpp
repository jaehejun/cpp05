#include "Form.hpp"

Form::Form() : name("Form"), isSigned(false), gradeSign(1), gradeExecute(1)
{}

Form::Form(const std::string &name, const int &gradeSign, const int &gradeExecute) : name(name), isSigned(false), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
	std::cout << "Form constructed" << std::endl;
	if (gradeSign < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExecute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned), gradeSign(other.gradeSign), gradeExecute(other.gradeExecute)
{
	std::cout << "Form copy" << std::endl;
}

Form::~Form() {}

Form &Form::operator=(const Form &other) {}

const std::string Form::getName() const
{
	return name;
}

bool Form::getIsSigned() const
{
	return isSigned;
}

const int Form::getGradeSign() const
{
	return gradeSign;
}

const int Form::getGradeExecute() const
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