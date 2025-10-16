#include <iostream>
#include <memory>
#include <string>

class Sensor {
    std::string name;
public:
    Sensor(std::string n) : name(n) {
        std::cout << "Sensor " << name << " created\n";
    }
    ~Sensor() {
        std::cout << "Sensor " << name << " destroyed\n";
    }
    void readData() {
        std::cout << "Reading data from " << name << "...\n";
    }
};

class Controller {
    std::shared_ptr<Sensor> sensor;
public:
    Controller(std::shared_ptr<Sensor> s) : sensor(s) {}
    void operate() {
        sensor->readData();
    }
};

int main() {
    auto sharedSensor = std::make_shared<Sensor>("Temperature");

    Controller c1(sharedSensor);
    Controller c2(sharedSensor);

    std::cout << "Use count before operating: " << sharedSensor.use_count() << "\n";

    c1.operate();
    c2.operate();

    std::cout << "Use count after operating: " << sharedSensor.use_count() << "\n";
}
