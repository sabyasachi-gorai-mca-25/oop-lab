#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Box
{
private:
    T value;

public:
    Box(T v) : value(v) {}

    T getValue() const { return value; }
};
int main()
{

    Box<int> intBox(10);
    Box<double> doubleBox(5.5);
    Box<string> strBox("Hello");

    cout << intBox.getValue() << endl;    // 10
    cout << doubleBox.getValue() << endl; // 5.5
    cout << strBox.getValue() << endl;    // Hello
}