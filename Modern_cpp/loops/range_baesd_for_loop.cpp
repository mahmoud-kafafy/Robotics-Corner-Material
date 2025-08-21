#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // -------- Initialization list examples --------
    cout << "Integer list:" << endl;
    for (int n : {10, 20, 30, 40, 50}) {
        cout << n << " ";
    }
    cout << "\n\n";

    cout << "Double list:" << endl;
    for (double d : {1.1, 2.2, 3.3, 4.4}) {
        cout << d << " ";
    }
    cout << "\n\n";

    cout << "String list:" << endl;
    for (string s : {"SWE26", "C++", "Loops"}) {
        cout << s << " ";
    }
    cout << "\n\n";

    cout << "Doubled numbers (with reference):" << endl;
    for (int &n : {1, 2, 3, 4, 5}) {
        n *= 2;
        cout << n << " ";
    }
    cout << "\n\n";

    cout << "Read-only numbers (const reference):" << endl;
    for (const int &n : {100, 200, 300}) {
        cout << n << " ";
    }
    cout << "\n\n";

    // -------- Array example --------
    int arr[] = {10, 20, 30, 40, 50};
    cout << "Array elements: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\n\n";

    // -------- Vector example --------
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Vector elements: ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << "\n\n";

    // -------- String example --------
    string text = "SWE26";
    cout << "Characters in string: ";
    for (char c : text) {
        cout << c << " ";
    }
    cout << "\n\n";

    // -------- Modify vector elements using reference --------
    vector<int> nums = {5, 10, 15};
    for (int &n : nums) {
        n *= 2; // double each element
    }
    cout << "Modified vector elements: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << "\n\n";

    // -------- Read-only iteration with const reference --------
    cout << "Read-only iteration with const reference: ";
    for (const int &n : nums) {
        cout << n << " ";
    }
    cout << "\n";

    return 0;
}
