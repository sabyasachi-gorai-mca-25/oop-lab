// g++ 00_succ_pred_code.cpp 09_sub_two_rec.cpp -o run

#include <iostream>
#include "00_succ_pred.h"

// subtract b from a using recursion
size_t sub(size_t a, size_t b)
{
    if (b == 0) // base case
        return a;

    if (a < b) // ensure a >= b by swapping
        return sub(b, a);

    return sub(pred(a), pred(b)); // decrease both
}

int main()
{
    size_t a, b;
    std::cout << "Enter two positive numbers: ";
    std::cin >> a >> b;
    if (b > a)
    {
        std::cout << b << " - " << a << " = " << sub(a, b) << "\n";
    }
    else
    {

        std::cout << a << " - " << b << " = " << sub(a, b) << "\n";
    }
    return 0;
}
