#include <iostream>
using namespace std;

void tower_of_hanoi(int n_disks, int source, int helper, int dest)
{
    // check if have only one disk
    if (n_disks == 1)
    {
        cout << "Move disk " << n_disks << " from pole " << source << " to " << dest << endl;
        return;
    }
    // move above (n - 1) disks to the helper rod
    tower_of_hanoi((n_disks - 1), source, dest, helper);

    // now move the nth disk to the dest rod
    cout << "Move disk " << n_disks << " from pole " << source << " to " << dest << endl;

    // now move all the disks from helper pole to dest pole
    tower_of_hanoi((n_disks - 1), helper, source, dest);
}

int main()
{

    // call the hanoi function
    tower_of_hanoi(3, 1, 2, 3);
    return 0;
}