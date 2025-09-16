#include <iostream>
using namespace std;

/*==============================
Objective: To find successor of a number
Input:  n: non-negative number
Return value: successor of n
Side Effects: None
================================*/
size_t succ(size_t n)
{
    // Approach: add 1 to n
    return n + 1;
}

/*==============================
Objective: Finds the predecessor of a given number `n`
Input:         n: A non-negative number whose predecessor is sought.
       candidate: A current candidate number used to check against `n`.
Return: The predecessor of `n`.
================================*/
size_t pred_helper(size_t n, size_t candidate)
{
    if (succ(candidate) == n)
        return candidate;
    else
        return pred_helper(n, succ(candidate));
}

/*==============================
Objective: To find predecessor of a number
Input: n: non-negative number
Return value: predecessor of n
Side Effects: None
================================*/
size_t pred(size_t n)
{
    return pred_helper(n, 0);
}

/*==============================
Objective: Perform subtraction using recursion
Input: Integer a (minuend), b (subtrahend)
Output: calculated subtraction of b from a
Side Effects: None
Approach: Decrease both a and b by 1 (using pred) until b becomes 0.
================================*/
int subtract(int a, int b)
{
    // Base case: when b becomes 0, return a
    if (b == 0)
        return a;
    else
        return subtract(pred(a), pred(b));
}

// Main Driver Function
int main()
{
    int a, b;
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    cout << "Result of " << a << " - " << b << " = " << subtract(a, b) << "\n";

    return 0;
}