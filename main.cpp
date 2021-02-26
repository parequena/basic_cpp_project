#include <functional>
#include <iostream>
#include <Hello.hpp>

int main()
{
    std::cout << "From main\n";
    Hello_t h{};
    h.sayHello();
    return 0;
}
