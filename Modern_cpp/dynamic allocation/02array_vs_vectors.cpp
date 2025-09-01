#include <iostream>
#include <vector>
using namespace std;

int main() {
    // --------- 1. Static Array ---------
    cout << "=== Static Array (size fixed at compile-time) ===\n";
    int arr[5];  // fixed size 5

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Static array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";


    // --------- 2. Dynamic Array (new/delete) ---------
    cout << "=== Dynamic Array (size decided at runtime) ===\n";
    int n;
    cout << "Enter size of dynamic array: ";
    cin >> n;

    int* dynArr = new int[n];  // allocate array of size n

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> dynArr[i];
    }

    cout << "Dynamic array elements: ";
    for (int i = 0; i < n; i++) {
        cout << dynArr[i] << " ";
    }
    cout << "\n";

    delete[] dynArr;  // free memory
    cout << "(Memory freed for dynamic array)\n\n";


  // --------- 3. Vector ---------
    cout << "=== Vector (modern, resizable array) ===\n";
    int m;
    cout << "Enter size of vector: ";
    cin >> m;

    vector<int> vec;  // start empty
    cout << "Enter " << m << " numbers:\n";
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        vec.push_back(x); // dynamically grows
    }

    cout << "Vector elements: ";
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl;

    // --------- Using pop_back ---------
    cout << "\nRemoving last 2 elements with pop_back...\n";
    if (!vec.empty()) vec.pop_back();
    if (!vec.empty()) vec.pop_back();

    cout << "Vector after pop_back: ";
    for (int x : vec) {
        cout << x << " ";
    }
    return 0;
}
