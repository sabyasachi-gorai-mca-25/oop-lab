
---

# 📘 `size_t` in C++

---

## 1. **What is `size_t`?**

* `size_t` is an **unsigned integer type** defined in `<cstddef>` (or indirectly from many headers).
* It is used to represent **sizes of objects, array indices, and counts**.

👉 Think of it as “the type guaranteed to hold the size of anything in memory.”

---

## 2. **Key Properties**

* **Unsigned** → cannot represent negative numbers.
* **Platform dependent**:

  * On **32-bit systems** → usually 4 bytes (0 to 4,294,967,295).
  * On **64-bit systems** → usually 8 bytes (0 to 18,446,744,073,709,551,615).

---

## 3. **Where You See It**

* Returned by `sizeof`:

  ```cpp
  size_t n = sizeof(int);   // always non-negative
  ```
* Used in STL containers:

  ```cpp
  std::vector<int> v = {1,2,3};
  size_t len = v.size();
  ```
* For array indexing and loops (safe with container sizes).

---

## 4. **Why Not Just int?**

* `int` might not be big enough to hold the size of very large objects (esp. 64-bit systems).
* `size_t` guarantees enough range.

---

## 5. **Cautions**

* Since it’s unsigned, comparing with `int` may cause bugs:

  ```cpp
  int x = -5;
  size_t y = 10;
  if (x < y) { ... }   // ⚠️ x becomes a huge positive number when converted
  ```

---

✅ **Quick Summary**

* `size_t` = unsigned integer type for object sizes/indices.
* Returned by `sizeof`, `.size()`, etc.
* Platform dependent (32-bit vs 64-bit).
* Safer than `int` for sizes, but beware of signed/unsigned mismatches.

---