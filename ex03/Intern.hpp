#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
  private:
    Form *createShrubberyForm(const std::string &target);
    Form *createRobotomyForm(const std::string &target);
    Form *createPresidentialForm(const std::string &target);

  public:
    class ParamNotExist : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };
    Intern();
    Intern(const Intern &other);
    ~Intern();
    Intern &operator=(const Intern &other);
    Form *makeForm(const std::string &name, const std::string &target);
};

#endif