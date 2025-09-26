#include <iostream>
using namespace std;

class Engine {
public:
    void start() { cout << "Engine starts\n"; }
};

class Car {
private:
    Engine* engine;   // Aggregation: Car uses external Engine
public:
    Car(Engine* e) : engine(e) {}   // Car gets Engine from outside
    void drive() {
        engine->start();
        cout << "Car is driving\n";
    }
};

int main() {
    Engine e;    // Engine exists independently
    Car c(&e);   // Car only references the Engine
    c.drive();   // Engine starts, Car drives
    return 0;
}
