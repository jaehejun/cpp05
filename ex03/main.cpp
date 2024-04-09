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
