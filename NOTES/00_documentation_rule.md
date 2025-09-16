Code is important, as well as documentation. Documentation should include the following:

### Objective
This is the **purpose of the function**—what the function is supposed to do. Think about why the function exists.

### Inputs
Write about the **parameters of the function**. You need to specify the name, type, and meaning of each input.

### Outputs
What the function gives back. The type of data it returns should be mentioned. The return value can also be mentioned.

### Side Effects

### 1. **Definition**

A **side effect** occurs when an operation changes state outside its local scope or interacts with the external environment.
👉 It’s anything beyond just computing and returning a value.

---

### 2. **Examples of Side Effects**

* **Modifying variables** (esp. global/static)

  ```cpp
  int x = 0;
  void f() { x = 5; }   // side effect: changes global x
  ```
* **Changing parameters by reference**

  ```cpp
  void update(int &a) { a = 10; }  // side effect: modifies caller’s variable
  ```
* **I/O operations**

  * `std::cin` → takes input from outside, changes variables
  * `std::cout` → prints to screen, interacts with external world
* **File/database operations** (writing, reading, deleting, etc.)
* **Using random generators, time, network calls** (depends on external environment)

---

### 3. **Why Side Effects Matter**

* **Predictability**: Code with side effects may behave differently each run (depends on input, environment).
* **Testing & Debugging**: Pure functions (no side effects) are easier to test.
* **Concurrency**: Side effects can cause race conditions when multiple threads access shared data.

---

### 4. **Pure Function vs Side Effect Function**

* **Pure Function** → No side effects, output depends only on input.

  ```cpp
  int add(int a, int b) { return a + b; }  
  ```
* **Function with Side Effect** → Affects outside world.

  ```cpp
  int x = 0;
  void f() { x++; }   // modifies global x → side effect
  ```

---

### 5. **Key I/O Note**

* `std::cin` = side effect → modifies variable + depends on external input
* `std::cout` = side effect → outputs to console (external system interaction)

---

