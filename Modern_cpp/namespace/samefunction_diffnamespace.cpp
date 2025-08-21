#include <iostream>

namespace English {
    void greet() {
        std::cout << "Hello!" << std::endl;
    }
}

namespace Arabic {
    void greet() {
        std::cout << "مرحبا!" << std::endl;
    }
}

int main() {
    // Use English version
    English::greet();

    // Use Arabic version
    Arabic::greet();

    return 0;
}
