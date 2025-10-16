
#include <iostream>
#include <memory>

int main() {
std::unique_ptr<int> p1 = std::make_unique<int>(10);
std::unique_ptr<int> p2 = std::move(p1);

if (!p1)
    std::cout << "p1 is now null\n";

std::cout << "p2 owns the data: " << *p2 << std::endl;


// ✅ Key lesson:

// p1 loses ownership (becomes nullptr).

// p2 becomes the new owner.

// No copy constructor, only move constructor works.


} 

