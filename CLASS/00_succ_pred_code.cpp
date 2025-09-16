#include <iostream>
#include <cassert> // Required for assert()
#include "00_succ_pred.h"
//==================================================================
// Objective: To find the successor of a number.
// Inputs:    number (size_t) - The non-negative integer.
// Return value: The successor of the input number.
// Side Effects: None.
//==================================================================
size_t succ(size_t number)
{
    // Approach: Return the next integer
    return number + 1; // cleaner than pre-increment
}

/**
 * Objective: Finds the predecessor of a given number 'n'
 * Input: n: A non-negative number whose predecessor is sought
 * candidate: A current candidate number used to check against 'n'
 * Return: The predecessor of 'n'
 */
/*
ANOTHER WAY OF DOING IT

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

*/
size_t pred_helper(size_t n, size_t candidate) {
    if (succ(candidate) == n) {
        return candidate;
    } else {
        return pred_helper(n, succ(candidate));
    }
}

/**
 * Objective: To find predecessor of a number
 * Input: n: non-negative number
 * Return value: predecessor of n
 * Side Effects: None
 */

size_t pred(size_t n) {
    return pred_helper(n, 0);
}

