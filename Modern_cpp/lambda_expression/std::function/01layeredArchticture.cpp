#include <iostream>
#include <functional> // for std::function
using namespace std;

// Library Layer (generic, reusable)
void compute(int a, int b, function<int(int, int)> operation) {
    cout << "Result = " << operation(a, b) << endl;
}

// Application Layer (custom logic)
int add(int x, int y) { return x + y; }
int multiply(int x, int y) { return x * y; }

int main() {
    // Using normal functions
    compute(5, 3, add);       // Result = 8
    compute(5, 3, multiply);  // Result = 15

    // Using a lambda
    compute(5, 3, [](int x, int y) { return x - y; });  // Result = 2

    // Using another lambda
    compute(5, 3, [](int x, int y) { return x * x + y * y; }); // Result = 34

    return 0;
}
