#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> p1 = std::make_unique<int>(42);
    std::cout << "Value: " << *p1 << std::endl; // prints 42

    std::unique_ptr<int> ptr (new int(10)); //second way to make unique ptr 
} // p1 goes out of scope → memory freed automatically
