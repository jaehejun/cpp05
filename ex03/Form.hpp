#ifndef FORM_HPP
#define FORM_HPP

#include <fstream>
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
  private:
    const std::string name;
    const std::string target;
    bool isSigned;
    const int gradeSign;
    const int gradeExecute;
    Form();
    Form(const Form &other);
    Form &operator=(const Form &other);

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
    class FormIsNotSigned : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };
    class FailToOpenFile : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };
    class FailToRobotomize : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };

    Form(const std::string &name, const std::string &target, const int &gradeSign, const int &gradeExecute);
    virtual ~Form();

    const std::string getName() const;
    bool getIsSigned() const;
    int getGradeSign() const;
    int getGradeExecute() const;
    const std::string getTarget() const;

    void beSigned(const Bureaucrat &par);
    virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &outStream, const Form &obj);

#endif