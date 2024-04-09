#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat a("A", 137);
        std::cout << a;
        ShrubberyCreationForm test("home");
        std::cout << test;

        a.signForm(test);
        a.executeForm(test);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Test SHRUBBERY: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b("B", 45);
        std::cout << b;
        RobotomyRequestForm test("brain");
        std::cout << test;

        b.signForm(test);
        b.executeForm(test);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Test ROBOTOMY: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat c("C", 5);
        std::cout << c;
        PresidentialPardonForm test("cpp");
        std::cout << test;

        c.signForm(test);
        c.executeForm(test);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Test PRESIDENTIAL: " << e.what() << std::endl;
    }
}
