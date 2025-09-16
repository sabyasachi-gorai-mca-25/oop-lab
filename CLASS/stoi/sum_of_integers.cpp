#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
//==================================================================
// Objective: To find the sum of a given number of integers.
// Inputs: count (int) - The number of integers to read.
// Return value: The total sum of the numbers.
// Side Effects: Interacts with standard input/output streams.
//==================================================================
int sum(int count)
{
    // Approach: Prompts the user for a specified number of integers,
    // and then iteratively reads and sums them.
    int total = 0;
    cout << "Please enter " << count << " integers.\n";
    for (int i = 0; i < count; ++i)
    {
        int number;
        cout << "Enter number " << (i + 1) << ": ";
        cin >> number;
        total += number;
    }
    return total;
}
//==================================================================
// Objective: To serve as the main driver for the program.
// Approach: Prompts the user for the number of items to sum,
// calls the 'sum' function, and displays the final result.
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