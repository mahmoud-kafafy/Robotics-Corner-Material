#include <iostream>
using namespace std;

int main() {
    int a(10);   // Direct initialization
    int b{20};   // Uniform initialization (C++11)
    int c = 30;  // Copy initialization

    cout << "a=" << a << ", b=" << b << ", c=" << c << "\n";
    return 0;
}
