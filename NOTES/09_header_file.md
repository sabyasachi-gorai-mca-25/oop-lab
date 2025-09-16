# 📘 Complete Guide to Header Files in C++

---

## 1️⃣ What is a Header File?

* A **header file** (`.h` or `.hpp`) is a file that **declares functions, classes, constants, macros, templates**, etc.
* It **does not usually contain the full function implementation** (except for inline functions or templates).
* Purpose: **share declarations** across multiple `.cpp` files.

---

## 2️⃣ Why Use Header Files?

1. **Separation of interface & implementation**

   * `.h` → interface (what functions/classes are available)
   * `.cpp` → implementation (how they work)

2. **Code reusability**

   * One header can be included in multiple `.cpp` files.

3. **Modular programming**

   * Makes code cleaner, easier to manage, and maintainable.

4. **Avoid duplication**

   * Instead of writing the same declarations everywhere, put them in a header.

---

## 3️⃣ How to Create a Header File

### Step 1: Create the `.h` file

Example: `math_utils.h`

```cpp
#ifndef MATH_UTILS_H   // include guard start
#define MATH_UTILS_H

int add(int a, int b);   // function declaration
int subtract(int a, int b);

#endif  // MATH_UTILS_H  // include guard end
```

* **Include guards** (`#ifndef ... #define ... #endif`) prevent the file from being included multiple times (avoids errors).

---

### Step 2: Create the corresponding `.cpp` file

Example: `math_utils.cpp`

```cpp
#include "math_utils.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
```

* Here we **define the functions** declared in the header.

---

### Step 3: Use the header in other files

Example: `main.cpp`

```cpp
#include <iostream>
#include "math_utils.h"  // include your header

int main() {
    std::cout << add(5, 3) << std::endl;       // prints 8
    std::cout << subtract(5, 3) << std::endl;  // prints 2
    return 0;
}
```

---

## 4️⃣ Where to Keep Header Files

* **Same folder as your project source** → simplest way for beginners.
* **Separate folder like `include/`** → professional projects, cleaner structure.

Example structure:

```
Project/
│
├─ include/
│   └─ math_utils.h
│
├─ src/
│   └─ math_utils.cpp
│   └─ main.cpp
```

* Then include headers like:

```cpp
#include "../include/math_utils.h"
```

or configure your compiler to **look in `include/` automatically**.

---

