#include <iostream>
#include <format> // Required for C++20 formatting

#include <cassert> // Required for assert()
#include "succ.h" 
/*******************************************************************
//==================================================================
// Objective: To find the successor of a number.
// Inputs:    number (size_t) - The non-negative integer.
// Return value: The successor of the input number.
// Side Effects: None.
//==================================================================
size_t succ(size_t number) {
    // Approach: Use the pre-increment operator to find the successor.
    return ++number;
}
*********************************************************************/
//==================================================================
// Objective: To find the predecessor of a number.
// Inputs:    number (size_t) - The non-negative integer to find the predecessor of.
//            pred_candidate (size_t) - An optional parameter to aid recursion.
// Return value: The predecessor of the input number.
// Side Effects: None.
//==================================================================
size_t pred(size_t number, size_t pred_candidate = 0) {
    // Approach: Use recursion to find the number that has the input
    //           number as its successor.
    assert(number > 0 && "Input number must be a positive integer.");
    if (succ(pred_candidate) == number)
        return pred_candidate;
    else
        return pred(number, succ(pred_candidate));
}

//==================================================================
// Objective: To serve as the main driver for the program.
// Approach:  Reads a positive number from the console and outputs
//            its predecessor using the recursive pred() function.
//==================================================================
int main() {
    size_t number;
    std::cout << "Enter a positive number: ";
    std::cin >> number;

    // A precondition for pred is that the number must be positive.
    if (number > 0) {
        std::cout << format("Predecessor of {:6d} is {:6d}\n", number, pred(number));
    } else {
        std::cout << "Predecessor is undefined for non-positive numbers.\n";
    }

    return 0;
}   