#include <iostream>

namespace Greetings {
    void hello() {
        std::cout << "Hello, world!" << std::endl;
    }

    void bye() {
        std::cout << "Goodbye!" << std::endl;
    }
}

int main() {
    // Import all names inside Greetings
    using namespace Greetings;

    hello();  // no need for Greetings::
    bye();

    return 0;
}
