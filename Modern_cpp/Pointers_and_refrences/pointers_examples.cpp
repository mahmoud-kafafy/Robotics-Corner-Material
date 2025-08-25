#include <iostream>
using namespace std;

int main() {
    // ---------- Pointer Basics ----------
    int a = 10;
    int* p = &a;  // pointer stores address of a

    cout << "a = " << a << endl;
    cout << "Address of a = " << &a << endl;
    cout << "Pointer p = " << p << ", *p = " << *p << endl;

    *p = 20; // change value of a through pointer
    cout << "After *p = 20 -> a = " << a << endl;

    // ---------- Reassign pointer ----------
    int b = 30;
    p = &b; // now p points to b
    cout << "Pointer now points to b -> *p = " << *p << endl;

    // ---------- Null pointer ----------
    int* np = nullptr;
    if (np == nullptr) {
        cout << "np is a nullptr" << endl;
    }

    // ---------- Pointer arithmetic ----------
    int arr[3] = {1, 2, 3};
    int* pa = arr;
    cout << "Array via pointer: " << *pa << ", " << *(pa+1) << ", " << *(pa+2) << endl;

    return 0;
}
