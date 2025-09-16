// g++ 00_succ_pred_code.cpp 08_add_two_rec.cpp -o run

#include <iostream>
#include "00_succ_pred.h"

size_t add(size_t a, size_t b)
{
    if (b == 0)
        return a;                 // base case
    return add(succ(a), pred(b)); // move 1 from b to a
}
int main()
{
    size_t a, b;
    std::cout << "Enter two positive numbers: ";
    std::cin >> a >> b;

    std::cout << a << " + " << b << " = " << add(a, b) << "\n";
    return 0;
    return 0;
}