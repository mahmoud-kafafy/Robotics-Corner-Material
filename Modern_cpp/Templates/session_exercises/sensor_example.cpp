#include <iostream>
using namespace std;

// ----------- Generic Template Base Class ------------
template <typename T>
class Sensor {
protected:
    T x, y, z;   // fixed 3-axis values
public:
    virtual ~Sensor() = default;

    // Virtual function to read sensor data
    virtual void readData() = 0;

    // Getters
    T getX() const { return x; }
    T getY() const { return y; }
    T getZ() const { return z; }
};

// ----------- Derived Class: Accelerometer ------------
class Accelerometer : public Sensor<double> {
public:
    void readData() override {
        this->x = 0.15;
        this->y = -9.80;
        this->z = 0.03;
    }
};

// ----------- Main Demo ------------
int main() {
    Accelerometer acc;
    acc.readData();

    cout << "Accelerometer: "
         << "X=" << acc.getX()
         << ", Y=" << acc.getY()
         << ", Z=" << acc.getZ() << endl;

    return 0;
}
