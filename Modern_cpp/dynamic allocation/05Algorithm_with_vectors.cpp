#include <iostream>
#include <vector>
#include <algorithm> // sort, for_each, find_if
using namespace std;

int main() {
    vector<int> numbers = {42, 7, 19, 73, 4, 11};

    // ---- 1. Sort ascending using lambda ----
    sort(numbers.begin(), numbers.end(),
         [](int a, int b) {
             return a < b; // ascending
         });

    // ---- 2. Display using for_each + lambda ----
    cout << "Numbers sorted ascending: ";
    for_each(numbers.begin(), numbers.end(),
             [](int x) {
                 cout << x << " ";
             });
    cout << endl;

    // ---- 3. Find first number greater than 20 ----
    auto it = find_if(numbers.begin(), numbers.end(),
                      [](int x) {
                          return x > 20;
                      });

    if (it != numbers.end()) {
        cout << "First number greater than 20: " << *it << endl;
    } else {
        cout << "No number greater than 20 found." << endl;
    }

    return 0;
}
