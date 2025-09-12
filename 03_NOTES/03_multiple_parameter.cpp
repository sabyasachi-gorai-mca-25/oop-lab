#include <bits/stdc++.h>
using namespace std;

template <typename T1, typename T2>
class Pair
{
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    void display()
    {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main()
{
    Pair<int, string> p1(1, "Apple");
    Pair<double, char> p2(3.14, 'A');

    p1.display();
    p2.display();

    return 0;
}