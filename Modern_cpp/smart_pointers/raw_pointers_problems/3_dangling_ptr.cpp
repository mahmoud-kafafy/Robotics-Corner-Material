#include <iostream>
using namespace std;

void freeMemory(int* p) {
    delete p; // free the memory inside the function
    cout << "Memory deleted inside function\n";
}

int main() {
    int* ptr = new int(42);
    cout << "Value before delete: " << *ptr << endl;

    freeMemory(ptr); // memory freed here!

    cout << "Trying to access after delete: " << *ptr << endl; // ❌ dangling pointer

    return 0;
}
