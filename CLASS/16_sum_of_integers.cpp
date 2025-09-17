#include <iostream>
using namespace std;

//==================================================================
// Objective: To find the sum of a given number of integers (recursively).
// Inputs: count (int) - The number of integers to read.
// Return value: The total sum of the numbers.
// Side Effects: Interacts with standard input/output streams.
//==================================================================
int sum(int count)
{
    // Base case: no numbers left to read
    if (count == 0)
        return 0;

    // Recursive case: read one number and add to sum of remaining
    int number;
    cout << "Enter number " << count << ": ";
    cin >> number;

    return number + sum(count - 1);
}

//==================================================================
// Objective: To serve as the main driver for the program.
// Approach: Prompts the user for the number of items to sum,
// calls the 'sum' function recursively, and displays the final result.
//==================================================================
int main()
{
    int n_items;
    cout << "Enter the number of integers you want to sum: ";
    cin >> n_items;

    // Call the sum function to get the total
    int result = sum(n_items);

    // Display the final result
    cout << "\nThe sum of the " << n_items << " numbers is: " << result << endl;

    return 0;
}
