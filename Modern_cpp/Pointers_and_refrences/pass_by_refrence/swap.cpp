#include <iostream>
using namespace std;

// Swap by value (does not change original variables)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swap by reference (changes original variables)
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swap by pointer (changes original variables)
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Original x = " << x << ", y = " << y << "\n";

    // Swap by value
    swapByValue(x, y);
    cout << "After swapByValue x = " << x << ", y = " << y << " (no change)\n";

    // Swap by reference
    swapByReference(x, y);
    cout << "After swapByReference x = " << x << ", y = " << y << " (swapped)\n";

    // Swap by pointer
    swapByPointer(&x, &y);
    cout << "After swapByPointer x = " << x << ", y = " << y << " (swapped back)\n";

    return 0;
}
