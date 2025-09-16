#include <iostream>
#include <variant>
#include <string>
using namespace std;

int main() {
    // Variant can hold int, double, or string
    variant<int, double, string> v;

    // Assign different values to test
    v = 42;
    // v = 3.14;
    // v = "Hello";

    // Use index() to switch based on active type
    switch (v.index()) {
        case 0:  // int
            cout << "Integer value: " << get<int>(v) << endl;
            break;
        case 1:  // double
            cout << "Double value: " << get<double>(v) << endl;
            break;
        case 2:  // string
            cout << "String value: " << get<string>(v) << endl;
            break;
        default:
            cout << "Unknown type!" << endl;
    }

    return 0;
}
