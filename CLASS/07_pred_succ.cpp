#include <iostream>
#include "00_succ_pred.h"

int main()
{
    size_t number;

    std::cout << "Enter a positive number: ";
    std::cin >> number;

    if (number > 0)
    {
        // Display the predecessor using C++20 format
        std::cout << "Predecessor of " << number
                  << " is " << pred(number) << "\n";
    }
    else
    {
        std::cout << "Predecessor is undefined for non-positive numbers.\n";
    }

    return 0;

}


// g++ 00_succ_pred_code.cpp 07_pred_succ.cpp -o run
