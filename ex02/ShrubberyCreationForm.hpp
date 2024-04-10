#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm
{
  private:
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

  public:
    class FailToOpenFile : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };
    ShrubberyCreationForm(const std::string &target);
    virtual ~ShrubberyCreationForm();

    virtual void execute(Bureaucrat const &executor) const;
};

#endif