#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(5);
    delete ptr;     // first delete ✅
    delete ptr;     // ❌ second delete — undefined behavior

    return 0;
}
