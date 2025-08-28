#include <iostream>
using namespace std;

// Library Layer (generic)
void compute(int a, int b, int (*operation)(int, int)) {
    cout << "Result = " << operation(a, b) << endl;
}

// Application Layer (custom logic)
int add(int x, int y) { return x + y; }
int multiply(int x, int y) { return x * y; }

int main() {
    // App chooses which logic to plug in
    compute(5, 3, add);       // Result = 8
    compute(5, 3, multiply);  // Result = 15
}

