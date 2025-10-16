#include <iostream>
#include <memory>

int main() {
    //How to create:
    auto ptr = std::make_unique<int>(10);

//    ❌ You can’t copy a unique_ptr: Because unique_ptr means unique ownership — no two pointers can own the same object.
// std::unique_ptr<int> p1 = std::make_unique<int>(10);
// std::unique_ptr<int> p2 = p1; // ❌ ERROR: copy not allowed

} 
