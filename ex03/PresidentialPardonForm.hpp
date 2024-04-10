#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class PresidentialPardonForm : public Form
{
  private:
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

  public:
    PresidentialPardonForm(const std::string &target);
    virtual ~PresidentialPardonForm();

    virtual void execute(Bureaucrat const &executor) const;
};

#endif