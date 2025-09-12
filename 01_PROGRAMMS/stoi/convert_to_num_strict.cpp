#include <iostream>
#include <string>
#include <stdexcept> // For std::invalid_argument, std::out_of_range

//==================================================================
// Function: main
// Objective: To take a string input from the user and convert it to 
//            either an integer or a float depending on whether it 
//            contains a decimal point. Handles invalid input strictly.
// Input: A string entered by the user (e.g., "123", "45.67", "abc", "12a3").
// Output: Prints the converted value (int or float) or an error message.
// Side effects: Console input/output operations.
//==================================================================
int main() {
    std::string input;

    std::cout << "--- String to Number Converter (Strict) ---\n\n";

    // Prompt user for input
    std::cout << "Enter a numeric string: ";
    std::cin >> input;

    try {
        size_t pos;  // To check how many characters were consumed

        if (input.find('.') != std::string::npos) {
            // Convert to float
            float value = std::stof(input, &pos);
            if (pos != input.size()) {
                throw std::invalid_argument("Extra characters found");
            }
            std::cout << "Converted to float: " << value << std::endl;
        } else {
            // Convert to int
            int value = std::stoi(input, &pos);
            if (pos != input.size()) {
                throw std::invalid_argument("Extra characters found");
            }
            std::cout << "Converted to int: " << value << std::endl;
        }
    }
    catch (const std::invalid_argument& e) {
        std::cout << "Error: Invalid input. Please enter a valid numeric string.\n";
    }
    catch (const std::out_of_range& e) {
        std::cout << "Error: Number out of range.\n";
    }

    return 0;
}
