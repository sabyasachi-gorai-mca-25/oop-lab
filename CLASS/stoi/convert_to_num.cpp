/*
They convert the numeric prefix of the string until they hit a non-numeric character.

If the string starts with something invalid (like "abc"), they throw std::invalid_argument.

If the string starts valid but has junk after (like "12a3" or "45.6xyz"), they still parse the valid prefix (12 or 45.6) and ignore the rest — no exception is thrown!

*/

#include <iostream>
#include <string>
#include <stdexcept> // For std::invalid_argument, std::out_of_range

//==================================================================
// Function: main
// Objective: To take a string input from the user and convert it to 
//            either an integer or a float depending on whether it 
//            contains a decimal point. Handles invalid input safely.
// Input: A string entered by the user (e.g., "123", "45.67", "abc").
// Output: Prints the converted value (int or float) or an error message.
// Side effects: Console input/output operations.
//==================================================================
int main() {
    std::string input;

    std::cout << "--- String to Number Converter (Safe) ---\n\n";

    // Prompt user for input
    std::cout << "Enter a numeric string: ";
    std::cin >> input;

    //==============================================================
    // Conversion with error handling
    // Objective: Check if string should be converted to int or float,
    //            and handle cases where input is invalid.
    //==============================================================
    try {
        if (input.find('.') != std::string::npos) {
            // Convert to float if decimal point exists
            float value = std::stof(input);
            std::cout << "Converted to float: " << value << std::endl;
        } else {
            // Convert to int if no decimal point
            int value = std::stoi(input);
            std::cout << "Converted to int: " << value << std::endl;
        }
    }
    catch (const std::invalid_argument& e) {
        //==========================================================
        // Triggered when the string is not a valid number
        // Example: "abc", "12a3"
        //==========================================================
        std::cout << "Error: Invalid input. Please enter a numeric string.\n";
    }
    catch (const std::out_of_range& e) {
        //==========================================================
        // Triggered when the number is too large for int/float
        // Example: "999999999999999999999999999"
        //==========================================================
        std::cout << "Error: Number out of range.\n";
    }

    return 0;
}
