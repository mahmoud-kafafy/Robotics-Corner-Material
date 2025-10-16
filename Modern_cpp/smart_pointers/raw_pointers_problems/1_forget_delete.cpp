#include <iostream>
using namespace std;

void createNumber() {
    int* ptr = new int(10);  // allocated on heap
    cout << "Number: " << *ptr << endl;
    // ❌ forgot to delete ptr before function ends
}

int main() {
    createNumber(); // function allocates memory, but never frees it
    cout << "End of program\n";
    return 0;
}
