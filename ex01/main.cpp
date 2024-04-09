#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("a", 5); // 생성시에 exception throw 되면 다음줄 실행하지않고 main->catch{}로 넘어가버림
        std::cout << a << std::endl;
        Bureaucrat b("b", 2);
        std::cout << b << std::endl;

        Form test("test", 3, 1);
        std::cout << test << std::endl;
        a.signForm(test); // exception 함수내부에서 catch 처리 -> 다음줄 실행
        b.signForm(test);
        b.signForm(test);
    }
	catch (const std::exception &e)
	{
		std::cerr << "@@@MAIN" << e.what() << std::endl;
	}

    try
    {
        Form lowS("lowSign", 151, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << "@@@MAIN" << e.what() << std::endl;
    }

    try
    {
        Form highS("highSign", 0, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << "@@@MAIN" << e.what() << std::endl;
    }

    try
    {
        Form lowE("lowExecute", 151, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << "@@@MAIN" << e.what() << std::endl;
    }

    try
    {
        Form highE("highExecute", 0, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << "@@@MAIN" << e.what() << std::endl;
    }
    
    return 0;
}
