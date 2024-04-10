#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

class Bureaucrat;
class Form;

class RobotomyRequestForm : public Form
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