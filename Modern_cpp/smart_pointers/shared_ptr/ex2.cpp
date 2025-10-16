#include <iostream>
#include <memory>
// 🧠 Explain:

// p1 owns the memory first → count = 1

// When we copy it to p2, both share the same memory → count = 2

// When p2 is destroyed (scope ends), count returns to 1

// Object is deleted automatically when count becomes 0

// ✅ No need to call delete, no memory leaks.

int main() {
    std::shared_ptr<int> p1 = std::make_shared<int>(100);

    std::cout << "p1 count: " << p1.use_count() << "\n";

    {
        std::shared_ptr<int> p2 = p1; // shared ownership
        std::cout << "Inside block:\n";
        std::cout << "p1 count: " << p1.use_count() << "\n";
        std::cout << "p2 count: " << p2.use_count() << "\n";
    } // p2 goes out of scope

    std::cout << "After block:\n";
    std::cout << "p1 count: " << p1.use_count() << "\n";

    std::cout << "Value of p1: " << *p1 << "\n";
}
