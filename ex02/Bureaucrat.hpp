#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

class AForm;

class Bureaucrat
{
  private:
    const std::string name;
    int grade;
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &other);

  public:
    class GradeTooHighException : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };

    Bureaucrat(const std::string &name, const int &grade);
    ~Bureaucrat();

    const std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm &form);
    virtual void executeForm(AForm const &form);
};

std::ostream &operator<<(std::ostream &outStream, const Bureaucrat &obj);

#endif