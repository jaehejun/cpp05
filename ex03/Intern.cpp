#include "Intern.hpp"

const char *Intern::ParamNotExist::what() const throw()
{
	return "Parameter doesn't exist!";
}

Intern::Intern()
{}

Intern::~Intern()
{}

Form *Intern::createShrubberyForm(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::createRobotomyForm(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::createPresidentialForm(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(const std::string &name, const std::string &target)
{
	std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form* (Intern::*functions[3])(const std::string &target)
	= {&Intern::createShrubberyForm, &Intern::createRobotomyForm, &Intern::createPresidentialForm};

	for (int i = 0; i < 3; i++)
	{
		if (name == names[i])
		{
			Form *form = (this->*functions[i])(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return form;
		}
	}
	throw ParamNotExist();
}