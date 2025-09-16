#include <iostream>
#include <string>
using namespace std;

/**
 * Objective: Convert numeric string into int or float depending on presence of '.'.
 * Inputs: String containing digits (optionally with one decimal point).
 * Outputs: If no '.', returns int. If '.', returns float.
 * Side Effects: Prints result to console (demo).
 */

void stringToNumber(const string &s) {
    bool isFloat = false;
    int intPart = 0;
    float floatPart = 0.0, divisor = 10.0;

    for (char ch : s) {
        if (ch == '.') {
            isFloat = true;
            continue;
        }
        if (ch >= '0' && ch <= '9') {
            if (!isFloat) {
                intPart = intPart * 10 + (ch - '0');  // integer part
            } else {
                floatPart += (ch - '0') / divisor;    // fractional part
                divisor *= 10;
            }
        } else {
            cerr << "Invalid character: " << ch << endl;
            return;
        }
    }

    if (isFloat) {
        float result = intPart + floatPart;
        cout << "Float value = " << result << endl;
    } else {
        cout << "Integer value = " << intPart << endl;
    }
}

int main() {
    string s1 = "1234";
    string s2 = "45.67";
    string s3 = "4d5.67";

    stringToNumber(s1);  // Integer value = 1234
    stringToNumber(s2);  // Float value = 45.67
    stringToNumber(s3);  // Float value = 45.67

    return 0;
}
