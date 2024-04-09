#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;
        Form *rrf;

        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        std::cout << *rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf;
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        std::cout << *rrf;
        rrf = someRandomIntern.makeForm("cpp 05", "Bender");
        std::cout << *rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;;
    }
}

//int main()
//{
//    try
//    {
//        Bureaucrat a("A", 137);
//        std::cout << a;
//        ShrubberyCreationForm test("home");
//        std::cout << test;

//        a.signForm(test);
//        a.executeForm(test);
//    }
//    catch (const std::exception &e)
//    {
//        std::cerr << "Test SHRUBBERY: " << e.what() << std::endl;
//    }

//    try
//    {
//        Bureaucrat b("B", 45);
//        std::cout << b;
//        RobotomyRequestForm test("brain");
//        std::cout << test;

//        b.signForm(test);
//        b.executeForm(test);
//    }
//    catch (const std::exception &e)
//    {
//        std::cerr << "Test ROBOTOMY: " << e.what() << std::endl;
//    }

//    try
//    {
//        Bureaucrat c("C", 5);
//        std::cout << c;
//        PresidentialPardonForm test("cpp");
//        std::cout << test;

//        c.signForm(test);
//        c.executeForm(test);
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << "Test PRESIDENTIAL: " << e.what() << std::endl;
//    }
//}
