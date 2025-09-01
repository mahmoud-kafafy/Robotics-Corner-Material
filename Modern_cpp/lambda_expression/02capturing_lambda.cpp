#include <iostream>
using namespace std;

int main() {
    int x = 10;

    // Capture by value [=] → makes a copy of x
    auto byValue = [=]() {
        cout << "Inside lambda (by value), x = " << x << endl;
        // x = 20;  // ❌ error: x is read-only here
    };

    // Capture by reference [&] → uses the real x
    auto byRef = [&]() {
        cout << "Inside lambda (by reference), x = " << x << endl;
        x = 20; // ✅ modifies the original x
    };

    cout << "Before calling lambdas, x = " << x << endl;

    byValue();  // prints 10
    byRef();    // prints 10 and changes x to 20

    cout << "After lambdas, x = " << x << endl;

    return 0;
}
