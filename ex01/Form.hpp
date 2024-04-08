#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string name;
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
		Form(const std::string &name, const int &gradeSign, const int &gradeExecute);
		~Form();

		const std::string getName() const;
		bool getIsSigned() const;
		int getGradeSign() const;
		int getGradeExecute() const;

		void beSigned(const Bureaucrat &par);
};

std::ostream &operator<<(std::ostream &outStream, const Form &obj);

#endif