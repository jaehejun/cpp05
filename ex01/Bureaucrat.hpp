#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
  private:
    const std::string name;
    int grade;
    Bureaucrat();
    Bureaucrat(const Bureaucrat &other);

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
    Bureaucrat &operator=(const Bureaucrat &other);

    const std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm();

};

std::ostream &operator<<(std::ostream &outStream, const Bureaucrat &obj);

#endif