#include "succ.h"
#include <cstddef>

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