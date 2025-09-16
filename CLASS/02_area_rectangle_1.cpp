#include <iostream>
#include <iomanip>  // For formatting manipulators

//==================================================================
// Objective: To represent a rectangle and compute its area.
// Inputs:    length, breadth (double) - The dimensions.
//==================================================================
class Rectangle {
private:
    double length, breadth;
public:
    Rectangle(double length, double breadth) {
        this->length = length;
        this->breadth = breadth;
    }

    double area() const {
        return length * breadth;
    }
};

//==================================================================
// Objective: To serve as the main driver for the program.
// Approach:  Prompts for the required dimensions for a rectangle,
//            creates a Rectangle object, calls its area() method,
//            and displays the result using formatted output.
//==================================================================
int main() {
    double length, breadth;

    std::cout << "--- Rectangle Area Calculator ---\n";

    // Prompt for and read the dimensions for the first rectangle
    std::cout << "Enter the length: ";
    std::cin >> length;
    std::cout << "Enter the breadth: ";
    std::cin >> breadth;

    Rectangle rect1(length, breadth);

    // Display results with formatting manipulators
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Length: " << std::setw(8) << length << "\n"
              << "Breadth: " << std::setw(8) << breadth << "\n"
              << "Area: " << std::setw(10) << rect1.area() << "\n\n";

    // Prompt for and read the dimensions for the second rectangle
    std::cout << "Enter the length for the second rectangle: ";
    std::cin >> length;
    std::cout << "Enter the breadth for the second rectangle: ";
    std::cin >> breadth;

    Rectangle rect2(length, breadth);

    std::cout << "Length: " << std::setw(8) << length << "\n"
              << "Breadth: " << std::setw(8) << breadth << "\n"
              << "Area: " << std::setw(10) << rect2.area() << "\n";

    return 0;
}
