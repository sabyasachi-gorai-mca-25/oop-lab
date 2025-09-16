### Space breakdown:

1. **Object itself (on stack)**

   * Usually \~24–32 bytes (implementation dependent, e.g., libstdc++ or MSVC).
   * Stores metadata like:

     * pointer to char buffer
     * length of string
     * capacity (how much is allocated)

2. **Character data (on heap)**

   * Actual string characters (`char[]`), stored separately.
   * Needs `N + 1` bytes (for null terminator).

### Example

```cpp
std::string s = "Hello";
```

* Metadata: \~24–32 bytes (always).
* Characters: `"Hello\0"` → 6 bytes.
* Total ≈ 30–38 bytes (depends on compiler + STL implementation).

---

⚡ Key Points for Exams/Interviews:

* A `std::string` object itself takes **constant space** (metadata).
* The actual characters take **dynamic heap memory** = length + 1.
* Different compilers/implementations may use different object sizes.

