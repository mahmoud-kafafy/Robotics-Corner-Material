#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    // ---------- Reference ----------
    int& ref = a;  // alias for a
    ref = 15;      // modifies a
    cout << "Reference -> a = " << a << ", ref = " << ref << endl;

    // ---------- Pointer ----------
    int* ptr = &a; // points to a
    *ptr = 25;     // modifies a
    cout << "Pointer -> a = " << a << ", *ptr = " << *ptr << endl;

    // ---------- Can you rebind? ----------
    ref = b;       // assigns b into a (does NOT rebind)
    cout << "After ref = b -> a = " << a << ", b = " << b << endl;

    ptr = &b;      // pointer can be redirected
    *ptr = 35;
    cout << "Pointer after redirect -> b = " << b << endl;

    // ---------- Null / invalid? ----------
    // int& rnull;   // ❌ cannot exist
    int* pnull = nullptr; // ✅ pointer can be null

    // ---------- Table Summary ----------
    cout << "\n--- Summary ---\n";
    cout << "Reference = nickname (must bind, cannot change)\n";
    cout << "Pointer   = address (can change, can be null, supports arithmetic)\n";

    return 0;
}
