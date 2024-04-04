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

  public:
    Bureaucrat(const std::string &name, const int &grade);
    Bureaucrat(const Bureaucrat &other);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &other);

    std::string getName() const;
    int getGrade() const;
    void incrementGrade(int grade);
    void decrementGrade(int grade);

};

std::ostream &operator<<(std::ostream &outStream, const Bureaucrat &obj);

#endif