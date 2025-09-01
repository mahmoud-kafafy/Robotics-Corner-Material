#include <iostream>
using namespace std;

int main() {
    // ----------------- Exercise 1 -----------------
    cout << "=== Exercise 1: Single Integer ===\n";
    int* num = new int; // allocate single int
    cout << "Enter a number: ";
    cin >> *num;
    cout << "You entered: " << *num << endl;
    delete num; // free memory

    // ----------------- Exercise 2 -----------------
    cout << "\n=== Exercise 2: Dynamic Array (Reverse Print) ===\n";
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int* arr = new int[n]; // allocate array
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Numbers in reverse order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // free array

    // ----------------- Exercise 3 -----------------
    cout << "\n=== Exercise 3: Find Maximum ===\n";
    cout << "Enter number of elements: ";
    cin >> n;

    int* data = new int[n]; // allocate array
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    int maxVal = data[0];
    for (int i = 1; i < n; i++) {
        if (data[i] > maxVal)
            maxVal = data[i];
    }

    cout << "Maximum value: " << maxVal << endl;

    delete[] data; // free memory

    return 0;
}
