
---

# **UNIT II – Modular Programming, I/O, Control Statements, Arrays, Pointers, Testing & Debugging**

---

## 1️⃣ Modular Program Development

**Definition:** Divide a large program into **independent, reusable modules** (functions or classes).

**Benefits:**

* Easier **readability**, **testing**, and **maintenance**
* **Code reuse** and **team development**

### ✏️ Example – Functions as Modules

```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {        // user-defined module
    return a + b;
}

int main() {
    int x = 5, y = 7;
    cout << "Sum = " << add(x, y) << endl;
    return 0;
}
```

---

## 2️⃣ Input and Output Statements

* **Header:** `<iostream>`
* **Objects:** `cin` (input), `cout` (output)
* **Operators:** `>>` (extraction), `<<` (insertion)

### ✏️ Example – Basic I/O

```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You entered: " << age << endl;
    return 0;
}
```

---

## 3️⃣ Control Statements

### A. Branching

#### `if`, `if…else`, `else if`

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;
    if (marks >= 90) cout << "Grade A";
    else if (marks >= 75) cout << "Grade B";
    else cout << "Grade C";
    return 0;
}
```

#### `switch`

* Expression must be **integral** (`int`, `char`, `enum`).

```cpp
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    switch (ch) {
        case 'a': cout << "Vowel"; break;
        case 'e': cout << "Vowel"; break;
        default : cout << "Not vowel";
    }
    return 0;
}
```

---

### B. Looping

| Loop         | Key Point              | Example                                        |
| ------------ | ---------------------- | ---------------------------------------------- |
| **for**      | Count-controlled       | `for(int i=1;i<=5;i++) cout<<i<<" ";`          |
| **while**    | Entry-controlled       | `int i=1; while(i<=5){cout<<i<<" "; i++;}`     |
| **do…while** | Executes at least once | `int i=1; do{cout<<i<<" "; i++;} while(i<=5);` |

---

### C. Jump/Flow-Altering

* **`break`** – exit loop or switch
* **`continue`** – skip current iteration
* **`exit()`** – terminate program (`<cstdlib>`)

```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    for(int i=1;i<=5;i++) {
        if(i==3) continue;    // skip 3
        if(i==5) break;       // stop at 5
        cout << i << " ";
    }
    exit(0); // program ends here
}
```

---

## 4️⃣ Arrays

**Definition:** Collection of **homogeneous elements** in **contiguous memory**.

### 1-D Array

```cpp
#include <iostream>
using namespace std;

int main() {
    int a[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++)
        cout << a[i] << " ";
    return 0;
}
```

### 2-D Array (Matrix)

```cpp
#include <iostream>
using namespace std;

int main() {
    int mat[2][3] = {{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}
```

---

## 5️⃣ Pointers

**Definition:** Variable that stores the **address of another variable**.

### Basics

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int *ptr = &x;              // pointer stores address of x
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl; // dereferencing
    return 0;
}
```

### Pointer & Array Relationship

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10,20,30};
    int *p = arr;  // arr acts like &arr[0]
    for(int i=0;i<3;i++)
        cout << *(p+i) << " ";
    return 0;
}
```

---

## 6️⃣ Testing and Debugging

* **Testing:** Execute program with **normal**, **boundary**, and **invalid** inputs.
* **Debugging:** Locate and fix errors using compiler messages, `gdb`, or IDE debugger.

### Common Error Types

| Type    | Example                           |
| ------- | --------------------------------- |
| Syntax  | Missing semicolon                 |
| Logical | Wrong formula                     |
| Runtime | Division by zero, invalid pointer |

---

## 🔑 Quick Revision Table

| Topic               | Key Syntax/Example             |
| ------------------- | ------------------------------ |
| Modular Programming | `int add(int a,int b){...}`    |
| Input/Output        | `cin >> var; cout << var;`     |
| Branching           | `if...else`, `switch`          |
| Looping             | `for`, `while`, `do...while`   |
| Jumps               | `break`, `continue`, `exit(0)` |
| Arrays              | `int arr[5]; arr[i]`           |
| Pointers            | `int *p = &x; cout << *p;`     |
| Testing/Debugging   | Use test cases, IDE debugger   |

---

### 📚 Exam Tips

1. **Definition → Syntax → Short Code** is the best pattern.
2. In `switch`, mention **integral type requirement**.
3. For pointers, always show **declaration + dereference**.
4. Quote **advantages of modular programming** (readability, reuse).
5. Use **comments in code** if allowed—it shows clarity.

---