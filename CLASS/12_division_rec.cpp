// g++ 00_succ_pred_code.cpp 12_division_rec.cpp -o run

#include <iostream>
#include "00_succ_pred.h"

// subtraction using recursion
size_t sub(size_t a, size_t b)
{
    if (b == 0)
        return a;
    if (a < b)
        return sub(b, a); // swap if b > a
    return sub(pred(a), pred(b));
}

// quotient using recursion
size_t quotient(size_t a, size_t b)
{
    if (b == 0)
    {
        return -1;
    }
    if (a < b)
        return 0; // base case
    return succ(quotient(sub(a, b), b));
}

int main()
{
    size_t a, b;
    std::cout << "Enter dividend and divisor: ";
    std::cin >> a >> b;
    if (quotient(a, b) != -1)
    {

        std::cout << a << " / " << b
                  << " = " << quotient(a, b) << " (quotient)\n";
    }
    else
    {
        std::cout << "can not divide by 0"<<std::endl;
    }

    return 0;
}
