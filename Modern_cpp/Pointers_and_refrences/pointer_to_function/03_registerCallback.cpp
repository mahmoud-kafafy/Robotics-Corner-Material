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

/*
// Library / framework / driver
void registerEvent(void (*callback)()) {
    // Run in another thread (simulate async event)
    thread t([callback]() {
        this_thread::sleep_for(2s); // simulate waiting for event
        callback(); // fire callback
    });
    t.detach(); // let it run independently
}
*/

int main() {
    // You only register — not call yourself
    registerEvent(onButtonPressedA);
}


