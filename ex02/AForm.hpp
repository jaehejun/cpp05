#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <fstream>

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		const std::string target;
		bool isSigned;
		const int gradeSign;
		const int gradeExecute;
		AForm();
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);

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
		AForm(const std::string &name, const std::string &target, const int &gradeSign, const int &gradeExecute);
		virtual ~AForm();

		const std::string getName() const;
		bool getIsSigned() const;
		int getGradeSign() const;
		int getGradeExecute() const;

		void beSigned(const Bureaucrat &par);
		virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &outStream, const AForm &obj);

#endif