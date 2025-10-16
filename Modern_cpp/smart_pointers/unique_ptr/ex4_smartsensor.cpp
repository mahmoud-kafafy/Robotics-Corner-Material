#include <iostream>
#include <memory>

class Sensor {
public:
    Sensor() { std::cout << "Sensor initialized\n"; }
    ~Sensor() { std::cout << "Sensor destroyed\n"; }
    void read() { std::cout << "Reading data...\n"; }
};


int main() {
    std::unique_ptr<Sensor> sensor = std::make_unique<Sensor>();
    sensor->read();

    // Transfer ownership to another pointer
    std::unique_ptr<Sensor> newOwner = std::move(sensor);

    if (!sensor)
        std::cout << "Old owner lost control\n";

    newOwner->read();
} // newOwner goes out of scope → sensor destroyed automatically


// Constructor/destructor messages show automatic resource management.

// std::move() clearly transfers ownership.

// No delete needed — memory is managed automatically.