#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("a", 3);
        std::cout << a << std::endl;
        Bureaucrat b("b", 140);
        std::cout << b << std::endl;

        for (int i = 0; i < 10; ++i)
        {
            a.incrementGrade();
            b.decrementGrade();
            std::cout << a << std::endl;
            std::cout << b << std::endl;
        }
    }
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

    try
    {
        Bureaucrat c("c", 1);
        std::cout << c << std::endl;
        Bureaucrat d("d", 0);
        std::cout << d << std::endl;
    }
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
    
    try
    {
        Bureaucrat e("e", 150);
        std::cout << e << std::endl;
        Bureaucrat f("f", 151);
        std::cout << f << std::endl;
    }
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


    return 0;
}
