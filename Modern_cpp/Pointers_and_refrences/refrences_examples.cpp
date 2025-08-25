#include <iostream>
using namespace std;

int main() {
    // ---------- Reference Basics ----------
    int a = 10;
    int& ref = a;  // ref is another name for a

    cout << "a = " << a << ", ref = " << ref << endl;

    ref = 20; // changes 'a'
    cout << "After ref = 20 -> a = " << a << ", ref = " << ref << endl;

    // ---------- Must Initialize ----------
    // int& badRef; // ❌ ERROR: must initialize reference

    // ---------- Cannot rebind ----------
    int b = 30;
    ref = b;   // assigns b into a, does NOT rebind ref
    cout << "After ref = b -> a = " << a << ", b = " << b << ", ref = " << ref << endl;

    // ---------- Reference to const ----------
    const int c = 40;
    const int& cref = c;
    cout << "Const reference cref = " << cref << endl;

    // ---------- Reference to temporary (const allowed) ----------
    const int& tempRef = 50; // extends lifetime of temporary
    cout << "tempRef = " << tempRef << endl;

    /*
    🔹 Special Rule for const &

        When you write:

        const int& tempRef = 50;

        👉 What the compiler does internally:

        It creates a hidden temporary variable:

        int __temp = 50;


        It binds tempRef to that hidden variable:

        const int& tempRef = __temp;


        The lifetime of the temporary (__temp) is extended to match the lifetime of the reference (tempRef).

        So effectively:

        tempRef is referencing a hidden variable that stores the value 50.

        The object lives as long as tempRef is alive.
    */

    return 0;
}
