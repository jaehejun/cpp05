#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

class Bureaucrat;
class AForm;

class RobotomyRequestForm : public AForm
{
  private:
    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

  public:
    class FailToRobotomize : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };
    RobotomyRequestForm(const std::string &target);
    virtual ~RobotomyRequestForm();

    virtual void execute(Bureaucrat const &executor) const;
};

#endif