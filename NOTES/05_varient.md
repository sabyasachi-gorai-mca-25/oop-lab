# 📘 `std::variant` (C++17)

* `std::variant` is a **type-safe union**.
* It can hold **one value** from a fixed set of types at a time.
* Example:

  ```cpp
  std::variant<int, std::string> v;
  v = 10;        // holds int
  v = "Hello";   // now holds string
  ```

### Key Points

1. **Access**:

   * `std::get<Type>(v)` → returns the value (throws if wrong).
   * `std::get_if<Type>(&v)` → safe pointer access.
2. **Check active type**:

   * `v.index()` → gives type index.
   * `std::holds_alternative<Type>(v)` → checks if holds that type.
3. **Process values**:

   * `std::visit(functor, v)` → apply function to active type.

👉 Safer and easier than old `union`.

---
