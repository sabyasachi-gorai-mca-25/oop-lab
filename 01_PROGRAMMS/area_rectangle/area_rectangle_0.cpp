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

#include <iostream>
#include <iomanip>  // For std::fixed, std::setprecision, std::setw

int main() {
    double length, breadth, area;

    // Prompt the user and read the length
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    // Prompt the user and read the breadth
    std::cout << "Enter the breadth of the rectangle: ";
    std::cin >> breadth;

    // Call the function to compute the area
    area = areaRectangle(length, breadth);

    // Use iomanip for formatted output
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Length: " << std::setw(8) << length << '\n'
              << "Breadth: " << std::setw(8) << breadth << '\n'
              << "Area: " << std::setw(10) << area << '\n';

    return 0;
}
