#include <iostream>
using namespace std;

/*
-------------------------------------------------------
Objective:
    To calculate the Greatest Common Divisor (GCD) of 
    two integers using recursion and the modulus operator.

Inputs:
    - Two integers (num1, num2) provided by the user.

Outputs:
    - An integer value representing the GCD of num1 and num2.

Side Effects:
    - Prints the result (GCD) to the console.
    - No modification of global state or external resources.

Method:
    Uses the Euclidean Algorithm:
        gcd(a, b) = gcd(b, a % b) until b == 0
-------------------------------------------------------
*/

// Recursive function to calculate GCD
int gcd(int a, int b) {
    if (b == 0) // Base case: if second number becomes 0
        return a;
    return gcd(b, a % b); // Recursive step
}

int main() {
    int num1, num2;

    // Taking input from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Output result
    cout << "GCD of " << num1 << " and " << num2 
         << " is: " << gcd(num1, num2) << endl;

    return 0; // Successful termination
}
