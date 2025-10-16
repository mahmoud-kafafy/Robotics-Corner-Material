#include <iostream>
#include <utility> // for std::move
using namespace std;

int main() {
    string a = "Hello";
    string b = std::move(a); // Move contents of a to b

    cout << "b = " << b << "\n";
    cout << "a = " << a << " (now empty or undefined)\n";
}
