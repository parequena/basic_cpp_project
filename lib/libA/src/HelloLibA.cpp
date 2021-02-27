#include <HelloLibA.hpp>
#include <iostream>

namespace libA
{
// Say hello
void Hello_t::sayHello() const
{
    std::cout << "From LIBA : Hello\n";
}
} // namespace libA