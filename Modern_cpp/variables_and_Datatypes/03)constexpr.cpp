#include <iostream>
using namespace std;

int main() {
    constexpr int a = 10;   // Value known at compile time
    constexpr int b = 20;   // Value known at compile time
    constexpr int sum = a + b; // Computed at compile time

    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    cout << "Sum (compile-time): " << sum << "\n";

    return 0;
}
