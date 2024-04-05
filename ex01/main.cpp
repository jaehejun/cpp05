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
		std::cout << e.what() << std::endl;
	}

    return 0;
}
