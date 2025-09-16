// g++ 00_succ_pred_code.cpp 10_mul_two_rec.cpp -o run

#include <iostream>
#include "00_succ_pred.h"

// recursive addition for multiplication
size_t add(size_t a, size_t b) {
    if (b == 0) return a;
    return add(succ(a), pred(b));
}

// multiplication using recursion
size_t mul(size_t a, size_t b) {
    if (b == 0) return 0;        // base case
    if (a < b) return mul(b, a); // swap for efficiency
    return add(a, mul(a, pred(b)));
}

int main() {
    size_t a, b;
    std::cout << "Enter two positive numbers: ";
    std::cin >> a >> b;

    std::cout << a << " * " << b << " = " << mul(a, b) << "\n";
    return 0;
}
