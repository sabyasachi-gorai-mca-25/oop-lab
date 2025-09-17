#include <iostream>
using namespace std;

/*
-------------------------------------------------------
Objective:
    To calculate the Least Common Multiple (LCM) of 
    two integers using recursion, checking multiples 
    of the larger number.

Inputs:
    - Two non-negative integers (num1, num2).

Outputs:
    - An integer value representing the LCM of num1 and num2.

Side Effects:
    - Prints the result (LCM) to the console.
-------------------------------------------------------
*/

// Recursive helper function to find LCM
size_t lcm_recursive(size_t a, size_t b, size_t current) {
    // Base case: if current is divisible by both, it's the LCM
    if (current % a == 0 && current % b == 0)
        return current;

    // Recursive step: move to next multiple of the larger number
    size_t step = (a > b) ? a : b;
    return lcm_recursive(a, b, current + step);
}

// Interface function to keep main clean
size_t lcm(size_t a, size_t b) {
    size_t start = (a > b) ? a : b;   // Start from max(a, b)
    return lcm_recursive(a, b, start);
}

int main() {
    size_t num1, num2;

    // Input from user
    cout << "Enter two positive numbers: ";
    cin >> num1 >> num2;

    // Output result
    cout << "LCM of " << num1 << " and " << num2 
         << " is: " << lcm(num1, num2) << endl;

    return 0;
}
