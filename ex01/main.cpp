#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat a("a", 5); // 생성시에 exception throw 되면 main->catch{}로 넘어감
        std::cout << a;
        Bureaucrat b("b", 2);
        std::cout << b;

        Form test("test", 3, 1);
        std::cout << test;
        a.signForm(test); // signForm 함수내부에서 catch -> 다음줄 실행
        b.signForm(test);
        b.signForm(test);
    }
	catch (const std::exception &e)
	{
		std::cerr << "Main catch: " << e.what() << std::endl;
	}

    try
    {
        Form lowS("lowSign", 151, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Main catch: " << e.what() << std::endl;
    }

    try
    {
        Form highS("highSign", 0, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Main catch: " << e.what() << std::endl;
    }

    try
    {
        Form lowE("lowExecute", 151, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Main catch: " << e.what() << std::endl;
    }

    try
    {
        Form highE("highExecute", 0, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Main catch: " << e.what() << std::endl;
    }
    
    return 0;
}
