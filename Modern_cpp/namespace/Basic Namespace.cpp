#include <iostream>

// Define a namespace
namespace MathUtils {
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
}

int main() {
    // Access using scope resolution operator ::
    std::cout << "Sum: " << MathUtils::add(3, 4) << std::endl;
    std::cout << "Product: " << MathUtils::multiply(3, 4) << std::endl;

    return 0;
}
