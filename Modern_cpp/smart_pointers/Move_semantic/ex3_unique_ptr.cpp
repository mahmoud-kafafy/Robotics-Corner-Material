#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto p1 = make_unique<int>(10);

    // auto p2 = p1; // ❌ error: unique_ptr can't be copied

    auto p2 = std::move(p1); // ✅ transfer ownership

    cout << "p2 = " << *p2 << "\n";

    if (!p1)
        cout << "p1 is now null after move.\n";
}
// 🧠 Explanation:

// unique_ptr has exclusive ownership.

// Copying would break the rule (two owners).

// So we use std::move() to transfer ownership safely.