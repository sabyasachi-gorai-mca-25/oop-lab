Here’s a **C++-focused, exam-ready set of notes** for **Unit 1**.
I’ve rewritten every section to match **C++ syntax, libraries, and terminology**, while keeping it concise for quick revision and full-marks answers.

---

## 1️⃣  Class and Object

| Concept    | Explanation                                                                                             | Key Points                                                                                        |
| ---------- | ------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------- |
| **Class**  | A **user-defined data type** that bundles data **(data members)** and functions **(member functions)**. | • Acts as a *blueprint*.<br>• Memory is not allocated until an **object** is created.             |
| **Object** | A **runtime instance** of a class.                                                                      | • Has its own copy of the class’s data members.<br>• Access members using the dot (`.`) operator. |

**Example**

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string color;

    void display() {
        cout << brand << " - " << color << endl;
    }
};

int main() {
    Car c1;              // object creation
    c1.brand = "Tesla";
    c1.color = "Red";
    c1.display();
    return 0;
}
```

**Key line for exams:** *“Class is a logical construct; Object is its physical representation in memory.”*

---

## 2️⃣  Identifier

* **Definition:** Name given to variables, functions, classes, etc.
* **Rules**

  * Can contain **letters, digits, underscore** (`_`).
  * Must **start with a letter or underscore**, **not a digit**.
  * **Case-sensitive** (`Total` ≠ `total`).
  * **Cannot** be a C++ keyword.
  * Should be meaningful (`studentAge`, not `x1`).

---

## 3️⃣  Keyword

* **Definition:** Reserved words with predefined meaning in C++.
* **Examples:**
  `int`, `float`, `class`, `public`, `private`, `if`, `else`, `return`, `while`, `for`, `true`, `false`.
* Total keywords: **around 90+** in modern C++ (but list the common ones if asked).

---

## 4️⃣  Literal

* **Definition:** A constant value written directly in the code.
* **Types in C++**:

  * **Integer literal:** `10`, `-45`, `0x1A` (hex), `010` (octal).
  * **Floating-point literal:** `3.14`, `-0.001`, `1.2e3`.
  * **Character literal:** `'A'`, `'\n'`.
  * **String literal:** `"Hello"`.
  * **Boolean literal:** `true`, `false`.
  * **Pointer literal:** `nullptr`.

---

## 5️⃣  Basic Data Types

| Type                       | Size\*                     | Example                  |
| -------------------------- | -------------------------- | ------------------------ |
| `int`                      | Typically 4 bytes          | `int count = 10;`        |
| `float`                    | 4 bytes (single precision) | `float pi = 3.14f;`      |
| `double`                   | 8 bytes (double precision) | `double rate = 2.718;`   |
| `char`                     | 1 byte                     | `char grade = 'A';`      |
| `bool`                     | 1 byte (true/false)        | `bool flag = true;`      |
| `string` (from `<string>`) | dynamic                    | `string name = "Alice";` |

\*Sizes can vary by compiler/architecture—mention “implementation-dependent” if asked.

---

## 6️⃣  Basic Operators

### a. Arithmetic

`+  -  *  /  %`

* `%` → remainder (only with integers).
* Increment/Decrement: `++` and `--`.

### b. Relational

`==  !=  >  <  >=  <=` → return `true` or `false`.

### c. Logical

`&&` (AND), `||` (OR), `!` (NOT).

* Combine Boolean expressions.

### d. Assignment

`=  +=  -=  *=  /=  %=`

### e. Others worth noting

* **Unary**: `-` (negation), `sizeof`, `typeid`.
* **Conditional (Ternary)**: `condition ? expr1 : expr2;`.

---

## 7️⃣  Standard Libraries (Header Files)

Commonly used in this unit:

| Purpose      | Header       | Example                    |
| ------------ | ------------ | -------------------------- |
| Input/Output | `<iostream>` | `cin`, `cout`              |
| Strings      | `<string>`   | `std::string`              |
| Math         | `<cmath>`    | `sqrt()`, `pow()`, `sin()` |
| Utility      | `<cstdlib>`  | `rand()`, `exit()`         |
| Time         | `<ctime>`    | `time()`, `clock()`        |

Use the **`std::`** namespace or `using namespace std;` for convenience.

---

### 🔑 Quick-Revision Capsule

| Topic       | Key Phrase                                   |
| ----------- | -------------------------------------------- |
| Class       | Blueprint of object                          |
| Object      | Instance of class                            |
| Identifier  | Programmer-chosen name (must not be keyword) |
| Keyword     | Reserved word (\~90 in C++)                  |
| Literal     | Fixed value (int, float, char, string, bool) |
| Basic Types | int, float, double, char, bool, string       |
| Operators   | Arithmetic, Relational, Logical, Assignment  |
| Std Lib     | iostream, cmath, string, cstdlib, ctime      |

---

### Exam Tips

* **Define → Example → Key property** is a winning pattern.
* Always mention **memory allocation only when object is created** for class/object questions.
* For identifiers, write *all rules*, especially “cannot start with digit” and “case-sensitive.”
* In operator questions, give a **small code snippet**.
