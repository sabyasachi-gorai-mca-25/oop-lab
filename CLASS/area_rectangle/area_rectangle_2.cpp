#include <iostream>
#include <iomanip>  // For std::fixed, std::setprecision, std::setw

//==================================================================
// Class: Rectangle
// Objective: To represent a rectangle and provide functionality
//            to calculate its area.
//==================================================================
class Rectangle {
private:
    double length, breadth;  // Rectangle dimensions

public:
    //==============================================================
    // Constructor
    // Objective: Initialize a rectangle with given length and breadth.
    // Input: double len (length), double brd (breadth)
    // Output: None
    // Side effects: Initializes private members length and breadth.
    //==============================================================
    Rectangle(double len, double brd) {
        this->length = len;
        this->breadth = brd;
    }

    //==============================================================
    // Function: getLength
    // Objective: To return the length of the rectangle.
    // Input: None
    // Output: double (length)
    // Side effects: None
    //==============================================================
    double getLength() const {
        return length;
    }

    //==============================================================
    // Function: getBreadth
    // Objective: To return the breadth of the rectangle.
    // Input: None
    // Output: double (breadth)
    // Side effects: None
    //==============================================================
    double getBreadth() const {
        return breadth;
    }

    //==============================================================
    // Function: area
    // Objective: To calculate the area of the rectangle.
    // Input: None (uses private members length and breadth)
    // Output: double (area = length × breadth)
    // Side effects: None
    //==============================================================
    double area() const {
        return length * breadth;
    }
};

//==================================================================
// Function: main
// Objective: Entry point of the program. Reads dimensions of two
//            rectangles, creates Rectangle objects, and displays
//            their dimensions and area with proper formatting.
// Input: User enters length and breadth for two rectangles.
// Output: Prints formatted length, breadth, and area for each rectangle.
// Side effects: Console input/output operations.
//==================================================================
int main() {
    double length, breadth;

    std::cout << "--- Rectangle Area Calculator ---\n\n";

    // Prompt for and read the dimensions for the first rectangle
    std::cout << "Enter the length for the first rectangle: ";
    std::cin >> length;
    std::cout << "Enter the breadth for the first rectangle: ";
    std::cin >> breadth;
    Rectangle rect1(length, breadth);  // Create first rectangle object

    // Display the results for rect1 using manipulators
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Length: " << std::setw(8) << rect1.getLength() << "\n"
              << "Breadth: " << std::setw(8) << rect1.getBreadth() << "\n"
              << "Area: " << std::setw(10) << rect1.area() << "\n\n";

    // Prompt for and read the dimensions for the second rectangle
    std::cout << "Enter the length for the second rectangle: ";
    std::cin >> length;
    std::cout << "Enter the breadth for the second rectangle: ";
    std::cin >> breadth;
    Rectangle rect2(length, breadth);  // Create second rectangle object

    // Display the results for rect2 using manipulators
    std::cout << "Length: " << std::setw(8) << rect2.getLength() << "\n"
              << "Breadth: " << std::setw(8) << rect2.getBreadth() << "\n"
              << "Area: " << std::setw(10) << rect2.area() << "\n";

    return 0;
}
