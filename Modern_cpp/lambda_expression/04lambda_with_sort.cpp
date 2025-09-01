#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {7, -2, 9, 4, -6, 1, 8};

    // 1️⃣ Normal ascending
    sort(numbers.begin(), numbers.end(),
         [](int a, int b) { return a < b; });
    cout << "Ascending: ";
    for (int x : numbers) cout << x << " ";
    cout << "\n";

    // 2️⃣ Descending
    sort(numbers.begin(), numbers.end(),
         [](int a, int b) { return a > b; });
    cout << "Descending: ";
    for (int x : numbers) cout << x << " ";
    cout << "\n";

    // 3️⃣ Odd numbers first, then even numbers
    sort(numbers.begin(), numbers.end(),
         [](int a, int b) {
             if ((a % 2 == 0) && (b % 2 != 0)) return false; // even after odd
             if ((a % 2 != 0) && (b % 2 == 0)) return true;  // odd before even
             return a < b; // if both odd or both even, sort ascending
         });
    cout << "Odd first, then even: ";
    for (int x : numbers) cout << x << " ";
    cout << "\n";

    // 4️⃣ Sort by absolute value
    sort(numbers.begin(), numbers.end(),
         [](int a, int b) { return abs(a) < abs(b); });
    cout << "By absolute value: ";
    for (int x : numbers) cout << x << " ";
    cout << "\n";

    return 0;
}
