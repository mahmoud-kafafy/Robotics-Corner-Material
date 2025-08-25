//callback
#include <iostream>
using namespace std;

// Callback type
void onButtonPressedA() { cout << "A pressed\n"; }

// Library / framework / driver
void registerEvent(void (*callback)()) {
    // Simulate some event
    bool buttonPressed = true;
    if (buttonPressed) {
        callback();   // ← library/framework calls back your function
    }
}

int main() {
    // You only register — not call yourself
    registerEvent(onButtonPressedA);
}