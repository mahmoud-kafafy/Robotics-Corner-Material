#include <iostream>
#include <array>
using namespace std;

int main() {
    // -------- 1. Declaration and initialization --------
    array<int, 5> numbers = {10, 20, 30, 40, 50};
    cout << "Array elements: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n\n";

    // -------- 2. Range-based for loop --------
    cout << "Using range-based for loop: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << "\n\n";

    // -------- 3. Modifying elements --------
    numbers[2] = 100; // change 3rd element
    cout << "Modified array: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << "\n\n";

    // -------- 4. Sum of elements --------
    int sum = 0;
    for (int n : numbers) {
        sum += n;
    }
    cout << "Sum of array elements: " << sum << "\n\n";

    // -------- 5. Accessing first and last element --------
    cout << "First element: " << numbers.front() << endl;
    cout << "Last element: " << numbers.back() << "\n\n";

    // -------- 6. Using at() for safe access --------
    cout << "Third element using at(): " << numbers.at(2) << "\n\n";

    // -------- 7. Array of strings --------
    array<string, 3> fruits = {"Apple", "Banana", "Cherry"};
    cout << "Fruits: ";
    for (const string &f : fruits) {
        cout << f << " ";
    }
    cout << "\n";

    return 0;
}
