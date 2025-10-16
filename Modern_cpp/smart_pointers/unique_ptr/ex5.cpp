#include <iostream>
#include <memory>

class Motor {
public:
    Motor() { std::cout << "Motor created\n"; }
    ~Motor() { std::cout << "Motor destroyed\n"; }

    void rotate(int speed) {
        std::cout << "Motor rotating at " << speed << " RPM\n";
    }
};


class RobotArm {
    std::unique_ptr<Motor> motor;  // unique ownership
public:
    RobotArm() {
        motor = std::make_unique<Motor>();
        std::cout << "RobotArm assembled\n";
    }

    ~RobotArm() {
        std::cout << "RobotArm disassembled\n";
    }

    void move() {
        motor->rotate(120);
    }
};


int main() {
    {
        std::unique_ptr<RobotArm> arm = std::make_unique<RobotArm>();
        arm->move();
    } // arm (and motor) automatically destroyed here
}
