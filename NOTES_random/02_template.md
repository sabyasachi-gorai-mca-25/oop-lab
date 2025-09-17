> one of the most powerful features of the language. They let you write generic code that works with any data type.

### Why Need Template?

```cpp
// Without templates, you’d need different functions:
    int myMax(int a, int b) {
        return (a > b) ? a : b;
    }

    double myMax(double a, double b) {
        return (a > b) ? a : b;
    }

// But with templates:

    template <typename T>
    T myMax(T a, T b) {
        return (a > b) ? a : b;
    }

cout << myMax(10, 20) << endl;        // int
cout << myMax(5.5, 2.3) << endl;      // double
cout << myMax('a', 'z') << endl;      // char

```