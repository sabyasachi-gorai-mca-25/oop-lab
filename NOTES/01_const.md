---

# 📘 Notes on `const` in C++

---

## 1. **What is `const`?**

* `const` (constant) in C++ is used to make a variable, object, pointer, function parameter, or return value **read-only**.
* Once defined as `const`, it **cannot be modified** after initialization.

---

## 2. **Uses of `const`**

### (a) **Const Variables**

```cpp
const int x = 10; 
x = 20; // ❌ Error: x is read-only
```

* Must be initialized at the time of declaration (for non-global).
* Ensures value safety.

---

### (b) **Const with Pointers**

There are 3 common cases:

1. **Pointer to const (data constant)**

   ```cpp
   const int *p;   // or int const *p;
   ```

   * The data pointed to **cannot be changed** via this pointer.
   * But pointer itself can point elsewhere.

2. **Const pointer (address constant)**

   ```cpp
   int * const p = &x;
   ```

   * The pointer **always points to the same location**.
   * But data at that location **can be modified**.

3. **Const pointer to const data**

   ```cpp
   const int * const p = &x;
   ```

   * Neither the pointer nor the data can be modified.

---

### (c) **Const Function Parameters**

* Prevents modification of parameters inside function.

```cpp
void print(const int x) {
    // x = 5; ❌ not allowed
    cout << x;
}
```

* For references:

```cpp
void show(const string &s) {
    cout << s; // can read, not modify
}
```

👉 Improves performance (no copy) + safety (can’t modify).

---

### (d) **Const Member Functions**

* Used in classes to ensure the method **does not modify any data members**.

```cpp
class Student {
    int age;
public:
    int getAge() const {   // const after function means read-only
        return age;
    }
};
```

👉 A `const` object can only call `const` member functions.

---

### (e) **Const Objects**

```cpp
const Student s1;
s1.getAge();     // ✅ allowed if getAge() is const
s1.setAge(20);   // ❌ not allowed
```

* Ensures object’s data cannot be changed.

---

### (f) **Const Return Type**

```cpp
const int getValue() {
    return 5;
}
```

* Prevents modifying returned value directly (but mostly relevant with references/pointers).

---

### (g) **Const with References**

```cpp
const int &ref = x;  // Reference is read-only
```

* Prevents modification of the original variable via reference.
* Also allows binding references to temporary values:

  ```cpp
  const int &r = 10; // ✅ valid
  ```

---

## 3. **Constexpr vs Const**

* `const`: Value cannot be modified **after initialization**. Value can be decided **at runtime**.
* `constexpr`: Value must be known **at compile time**.

```cpp
const int x = f();   // allowed if f() runs at runtime
constexpr int y = 10; // must be compile-time constant
```

---

## 4. **Best Practices**

* Always pass large objects as `const &` to functions for efficiency + safety.
* Use `const` member functions wherever modification isn’t needed → improves design.
* Prefer `constexpr` over `const` when compile-time evaluation is possible.

---

✅ **Quick Summary for Exams / Interviews**

* `const` makes variables, objects, parameters, pointers, and functions immutable.
* `const` after function = does not modify object.
* Const correctness = habit of using `const` wherever modification is not required → safer and more optimized code.

---

