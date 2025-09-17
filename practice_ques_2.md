Here’s a **practice question set** tailored to the patterns we just analyzed.
They’re grouped by **topic** and **difficulty** so you can simulate the real exams.

---

## 🟢 1. Recursion & Iteration

1. **Count in Vector**
   Write a **recursive** C++ function `countValue` that returns the number of times a given integer appears in a `vector<int>`.

   * Provide an **iterative** version for partial credit.

2. **Check Sorted Order**
   Create a recursive function `isAscending` to verify if a `vector<double>` is sorted in ascending order.

3. **String Length**
   Without using `.size()` or `length()`, write a recursive function `strLen` that finds the length of a `std::string`.

4. **Palindrome Check**
   Implement a recursive function `isPalindrome` to check if a given string is a palindrome.

---

## 🟠 2. File Handling & Validation

1. **Fortnight Appointments**
   Read a text file containing appointments of the format

   ```
   dd mm yyyy hh mm Purpose
   ```

   * Prompt the user for month, year, and **fortnight (1 or 2)**.
   * Write all valid appointments of that fortnight to an output file.
   * Skip invalid dates or times.

2. **Student Records**
   Maintain a file of student records (`roll, name, marks`).

   * Write a program to **append** a new record,
   * **search** for a student by roll number,
   * and print average marks of all students.

3. **Word Frequency Counter**
   Read a text file and output another file listing each distinct word and its frequency, ignoring case.

---

## 🟡 3. Functions & Modular Programming

1. **Dictionary Lookup**
   Using `std::map<string,string>`, accept a paragraph from the user and replace every word with its meaning (or `"None"`) enclosed in `$`.

2. **Perfect Squares**
   Write a variadic-style function (or take numbers in a `vector<int>`) that returns a `vector<bool>` indicating if each number is a perfect square **without using `sqrt()`**.

3. **Digit Sum Transformer**
   Accept a `vector<variant<int,string>>` (or separate arrays) and create a new list where

   * integers are replaced with the **sum of their digits**,
   * strings are converted to **uppercase**,
   * other types are removed.

---

## 🟣 4. Control Statements & Looping

1. **Menu-driven Calculator**
   Create a menu (using `switch`) for +, –, ×, ÷. Allow continuous operation until the user chooses Exit.

2. **Pattern Printing**
   Print a pyramid of numbers using nested loops, e.g.

   ```
       1
      1 2
     1 2 3
   ```

3. **Even/Odd Skipper**
   Using a `for` loop, print numbers 1–50 but skip multiples of 3 (`continue`) and stop completely when you reach a multiple of 17 (`break`).

---

## 🟤 5. Arrays & Pointers

1. **Reverse with Pointers**
   Read an array of integers and reverse it **in-place using pointers**, not indexing.

2. **Matrix Multiplication**
   Multiply two matrices using 2-D arrays. Show pointer arithmetic for extra practice.

3. **Dynamic Memory**
   Use `new` to allocate an array of size given by the user, read elements, and compute the average. Free memory using `delete[]`.

---

## Exam Simulation Tips

* Pick **any 3–4 problems** and solve **within 1 hour** to mimic minor test timing.
* **Comment every function**, include prototypes, and show a **sample run**.
* Practise **dry-run recursion** on small inputs to explain runtime stack if asked.

These questions mirror the **style, topics, and difficulty** of your past papers so you’ll be well-prepared for the next test.
