#include <iostream>
using namespace std;

class Engine {
public:
    void start() { cout << "Engine starts\n"; }
};

class Car {
private:
    Engine engine;   // Composition: Car creates and owns Engine
public:
    void drive() {
        engine.start();
        cout << "Car is driving\n";
    }
};

int main() {
    Car c;     // Engine is created inside Car
    c.drive(); // Engine starts, Car drives
    return 0;
}
