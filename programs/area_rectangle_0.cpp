#include <iostream>
#include <format>

//==================================================================
// Objective: To compute the area of a rectangle.
// Inputs:    length (double) - The length of the rectangle.
//            breadth (double) - The breadth of the rectangle.
// Outputs:   The calculated area (double).
//==================================================================
double areaRectangle(double length, double breadth) {

//  Approach:  The function multiplies the length by the breadth
//            and returns the result.
    double area =  length * breadth;
    return area;
}

int main() {

    double length, breadth, area;

    // Prompt the user and read the length
    std::cout << "Enter the length of the rectangle: ";
    cin >> length;

    // Prompt the user and read the breadth
    std::cout << "Enter the breadth of the rectangle: ";
    std::cin >> breadth;

    // Call the function to compute the area
    area = areaRectangle(length, breadth);

    std::cout << format("Length: {:8.2f}\nBreadth: {:8.2f}\nArea: {:10.2f}\n",
                   length, breadth, area);

    return 0;
}