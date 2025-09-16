// g++ 00_succ_pred_code.cpp 11_remainder_rec.cpp -o run

#include <iostream>
#include "00_succ_pred.h"

// recursive subtraction
size_t sub(size_t a, size_t b) {
    if (b == 0) return a; 
    if (a < b) return sub(b, a); // swap to keep a >= b
    return sub(pred(a), pred(b));
}

// remainder using recursion
size_t rem(size_t a, size_t b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero\n";
        return 0;
    }
    if (a < b) return a; // base case
    return rem(sub(a, b), b);
}

int main() {
    size_t a, b;
    std::cout << "Enter dividend and divisor: ";
    std::cin >> a >> b;

    if (b == 0) {
        std::cout << "Undefined (division by zero).\n";
    } else {
        std::cout << "Remainder of " << a << " % " << b 
                  << " = " << rem(a, b) << "\n";
    }

    return 0;
}
