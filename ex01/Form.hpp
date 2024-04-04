#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		bool isSigned;
		const int gradeForSign;
		const int gradeForExecute;

	public:
		Form();
		~Form();
		//getter for each attr
		void beSigned(const Bureaucrat &par);
		// void signForm() -> Bureaucrat class
};

std::ostream &operator<<(std::ostream &outStream, const Form &obj);

#endif