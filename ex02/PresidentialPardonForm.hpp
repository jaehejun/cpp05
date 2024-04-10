#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm;

class PresidentialPardonForm : public AForm
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