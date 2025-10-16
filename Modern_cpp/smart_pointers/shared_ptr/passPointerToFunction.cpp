#include <iostream>
#include <memory>

void printShared(const std::shared_ptr<int>& ptr) {
    if (ptr)
        std::cout << "Value: " << *ptr 
                  << " | use_count = " << ptr.use_count() << "\n";
    else
        std::cout << "Pointer is null.\n";
}

int main() {
    auto num = std::make_shared<int>(42);

    printShared(num);
    std::cout << "After function: use_count = " << num.use_count() << "\n";
}


//////////////////////////////////////////////////pass by value/////////////////////////////////////////////

// void printSharedCopy(std::shared_ptr<int> ptr) {
//     std::cout << "In function: Value = " << *ptr 
//               << " | use_count = " << ptr.use_count() << "\n";
// }

// int main() {
//     auto num = std::make_shared<int>(99);
//     std::cout << "Before function: use_count = " << num.use_count() << "\n";
//     printSharedCopy(num);
//     std::cout << "After function: use_count = " << num.use_count() << "\n";
// }


//////////////////////////////////////////////////////Template//////////////////////////////////////////

// template <typename T>
// void printSharedGeneric(const std::shared_ptr<T>& ptr) {
//     if (ptr)
//         std::cout << "Value: " << *ptr 
//                   << " | use_count = " << ptr.use_count() << "\n";
//     else
//         std::cout << "Pointer is null.\n";
// }