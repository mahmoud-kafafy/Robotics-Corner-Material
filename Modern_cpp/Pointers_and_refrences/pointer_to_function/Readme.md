
---

# 📘 Function Pointers & Callbacks in C++

## 🔹 1. What is a Callback?

A **callback function** is a function you pass as an argument to another function.
The “other function” can **call it back** whenever it needs to.

👉 This gives your program **flexibility** and makes functions **reusable**.

---

## 🔹 2. Function Pointers Basics

* A **function name** in C++ acts like a **pointer to the function**.
* You can store it in a variable and call it later.

Example:

```cpp
#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }

int main() {
    int (*fp)(int, int) = add; // function pointer to 'add'
    cout << fp(3, 4);          // calls add(3,4) → 7
}
```

---

## 🔹 3. Why Not Just Call the Function Directly?

### Direct Call

```cpp
cout << add(3, 4);
cout << multiply(3, 4);
```

* Behavior is **fixed** at compile-time.
* If you want different operations, you must write new code or `if/else`.

### With Callback

```cpp
void compute(int a, int b, int (*callback)(int, int)) {
    cout << "Result = " << callback(a, b) << endl;
}

int add(int x, int y) { return x + y; }
int multiply(int x, int y) { return x * y; }

int main() {
    compute(3, 4, add);       // Result = 7
    compute(3, 4, multiply);  // Result = 12
}
```

* `compute` doesn’t know which operation it will perform.
* The operation is **decided at runtime** by the callback.
* Makes the code **reusable and flexible**.

---

## 🔹 4. Real-Life Analogy 🎓

* **Direct Call:** You go to the bakery yourself and buy bread.
* **Callback:** You give your friend a note that says “buy bread.” Next time, you give them a note “buy cake.”

  * You didn’t change the bakery or your friend.
  * Only the “instruction” changed → that’s the callback.

---

## 🔹 5. Real Applications of Callbacks

1. **Sorting with custom rules**

   ```cpp
   // In C (before lambdas):
   qsort(arr, n, sizeof(int), compareFunction);
   ```
2. **Event-driven systems** (GUI buttons, interrupts).

   * Example: “When the button is clicked, run this function.”
3. **Asynchronous programming** → Run code after a task finishes.

---

## 🔹 6. Modern C++ Way (with Lambdas)

In modern C++, we often use **lambdas** instead of raw function pointers:

```cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 1};

    // sort with a lambda callback
    sort(v.begin(), v.end(), [](int a, int b) {
        return a > b; // descending
    });

    for (int x : v) cout << x << " ";
}
```

👉 Cleaner, no need to declare separate functions.

---

## 🔹 7. Key Takeaways

* **Function name** = pointer to function.
* **Callback** = function passed as argument.
* **Why important?** → flexibility, reusability, event-driven programming.
* **Analogy:** Instead of hardcoding an action, you pass an “instruction note” that can change anytime.
* Modern C++ prefers **lambdas / std::function** over raw function pointers.

---

✨ With callbacks, you don’t just write code that runs immediately —
You write code that can be **plugged in, reused, and run later when needed**.


