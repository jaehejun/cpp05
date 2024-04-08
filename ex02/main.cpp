#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat a("A", 138);
    std::cout << a;
    ShrubberyCreationForm test("home");
    std::cout << test;
    try
    {
        //a.signForm(test);
        a.executeForm(test);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}



//int main()
//{
//    try
//    {
//        Bureaucrat a("a", 5);
//        std::cout << a << std::endl;
//        Bureaucrat b("b", 2);
//        std::cout << b << std::endl;

//        Form test("test", 3, 1);
//        std::cout << test << std::endl;
//        a.signForm(test);
//        b.signForm(test);
//        b.signForm(test);

//    }
//	catch (const std::exception &e)
//	{
//		std::cout << e.what() << std::endl;
//	}

//    try
//    {
//        Form lowS("lowSign", 151, 1);
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << std::endl;
//    }

//    try
//    {
//        Form highS("highSign", 0, 1);
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << std::endl;
//    }

//    try
//    {
//        Form lowE("lowExecute", 151, 1);
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << std::endl;
//    }

//    try
//    {
//        Form highE("highExecute", 0, 1);
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << std::endl;
//    }
    
//    return 0;
//}
