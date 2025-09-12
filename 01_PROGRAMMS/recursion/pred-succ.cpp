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
===============================*/
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
Objective: Perform addition using recursion
Input: Integer a, b
Output: calculated addition of a and b
Side Effects: None
================================
*/
int add(int a, int b)
{
    //Approach: keep adding 1 to a and subtracting 1 from b until b becomes 0

    // Base Case
    if (b == 0)
        return a;
    else
        return succ(add(a, pred(b)));
}

/*
Objective: Perform multiplication using recursion
Input: Integer a, b
Output: calculated multiplication of a and b
Side Effects: None
*/
int multiply(int a, int b)
{
    // Approach: keep adding a, b times

    // Base Case
    if (b > 0)
        return a + multiply(a, pred(b));
    else
        return 0;
}

/*==============================
Objective: Perform subtraction using recursion
Input: Integer a, b
Output: calculated subtraction of b from a
Side Effects: None
===============================*/
int subtract(int a, int b)
{
    if (b == 0)
        return a;
    else
        return subtract(pred(a), pred(b));
}

// Main Driver Function
int main()
{
    cout << "pred(6) = " << pred(6) << "\n";

    cout << "add(5, 3) = " << add(5, 3) << "\n";

    cout << "multiply(4, 3) = " << multiply(4, 3) << "\n";

    cout << "subtract(10, 4) = " << subtract(10, 4) << "\n";

    return 0;
}
