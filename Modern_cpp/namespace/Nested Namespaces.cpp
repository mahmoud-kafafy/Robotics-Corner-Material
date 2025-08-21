#include <iostream>

namespace Company {
    namespace HR {
        void work() {
            std::cout << "[HR] Managing employees and hiring." << std::endl;
        }
    }

    namespace Robotics {
        void work() {
            std::cout << "[Robotics] Building autonomous robots." << std::endl;
        }
    }
}

int main() {
    Company::HR::work();
    Company::Robotics::work();
    return 0;
}
