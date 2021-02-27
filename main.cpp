#include <functional>
#include <iostream>
#include <Hello.hpp>
#include <libA/inc/HelloLibA.hpp>

int main()
{
    std::cout << "From main\n";
    Hello_t h{};
    h.sayHello();

    libA::Hello_t hh {};
    hh.sayHello();

    return 0;
}
