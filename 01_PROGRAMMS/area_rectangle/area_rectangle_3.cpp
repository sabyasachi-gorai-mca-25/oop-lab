#include <iostream>
#include <iomanip>  // For std::fixed, std::setprecision, std::setw

//==================================================================
// Class Template: Rectangle<T>
// Objective: To represent a rectangle with generic numeric type T
//            and provide functionality to calculate its area.
//==================================================================
template <typename T>
class Rectangle {
private:
    T length, breadth;  // Rectangle dimensions

public:
    //==============================================================
    // Constructor
    // Objective: Initialize a rectangle with given length and breadth.
    // Input: T len (length), T brd (breadth)
    // Output: None
    // Side effects: Initializes private members length and breadth.
    //==============================================================
    Rectangle(T len, T brd) {
        this->length = len;
        this->breadth = brd;
    }

    //==============================================================
    // Function: getLength
    // Objective: To return the length of the rectangle.
    // Input: None
    // Output: T (length)
    // Side effects: None
    //==============================================================
    T getLength() const {
        return length;
    }

    //==============================================================
    // Function: getBreadth
    // Objective: To return the breadth of the rectangle.
    // Input: None
    // Output: T (breadth)
    // Side effects: None
    //==============================================================
    T getBreadth() const {
        return breadth;
    }

    //==============================================================
    // Function: area
    // Objective: To calculate the area of the rectangle.
    // Input: None (uses private members length and breadth)
    // Output: T (area = length × breadth)
    // Side effects: None
    //==============================================================
    T area() const {
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

    std::cout << "--- Rectangle Area Calculator (Template Version) ---\n\n";

    // Prompt for and read the dimensions for the first rectangle
    std::cout << "Enter the length for the first rectangle: ";
    std::cin >> length;
    std::cout << "Enter the breadth for the first rectangle: ";
    std::cin >> breadth;
    Rectangle<double> rect1(length, breadth);  // Create first rectangle object (double type)

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
    Rectangle<double> rect2(length, breadth);  // Create second rectangle object (double type)

    // Display the results for rect2 using manipulators
    std::cout << "Length: " << std::setw(8) << rect2.getLength() << "\n"
              << "Breadth: " << std::setw(8) << rect2.getBreadth() << "\n"
              << "Area: " << std::setw(10) << rect2.area() << "\n";

    return 0;
}
