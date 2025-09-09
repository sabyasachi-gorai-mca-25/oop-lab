#include <iostream>
#include <iomanip>  // For std::fixed, std::setprecision, std::setw

//==================================================================
// Objective: To represent a rectangle and compute its area.
//==================================================================
class Rectangle {
private:
    double length, breadth;

public:
    // Constructor to initialize the rectangle's dimensions
    Rectangle(double len, double brd) {
        this->length = len;
        this->breadth = brd;
    }

    // Getter function for length
    double getLength() const {
        return length;
    }

    // Getter function for breadth
    double getBreadth() const {
        return breadth;
    }

    // Function to calculate the area
    double area() const {
        return length * breadth;
    }
};

//==================================================================
// Objective: To serve as the main driver for the program.
//==================================================================
int main() {
    double length, breadth;

    std::cout << "--- Rectangle Area Calculator ---\n\n";

    // Prompt for and read the dimensions for the first rectangle
    std::cout << "Enter the length for the first rectangle: ";
    std::cin >> length;
    std::cout << "Enter the breadth for the first rectangle: ";
    std::cin >> breadth;
    Rectangle rect1(length, breadth);

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
    Rectangle rect2(length, breadth);

    // Display the results for rect2 using manipulators
    std::cout << "Length: " << std::setw(8) << rect2.getLength() << "\n"
              << "Breadth: " << std::setw(8) << rect2.getBreadth() << "\n"
              << "Area: " << std::setw(10) << rect2.area() << "\n";

    return 0;
}
