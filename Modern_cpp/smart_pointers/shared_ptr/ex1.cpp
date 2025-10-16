#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> p1 = std::make_shared<int>(10);
    std::shared_ptr<int> p2 = p1;  // ✅ copy allowed

    std::cout << "p1 count: " << p1.use_count() << "\n";
    std::cout << "p2 count: " << p2.use_count() << "\n";

    /////////////////////////////////////////////////////


     std::shared_ptr<int> p1 = std::make_shared<int>(20);
    std::shared_ptr<int> p2 = std::move(p1);  // ✅ move allowed

    std::cout << "p1 is " << (p1 ? "not null" : "null") << "\n";
    std::cout << "p2 value: " << *p2 << "\n";
}
