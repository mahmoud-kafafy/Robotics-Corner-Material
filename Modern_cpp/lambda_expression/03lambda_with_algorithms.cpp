#include <iostream>
#include <vector>
#include <algorithm> // for sort, for_each, find_if, copy_if
using namespace std;

int main() {
    // ----- 1. Create a vector of numbers -----
    vector<int> numbers = {7, 2, 9, 4, 6, 1, 8};

    // ----- 2. Sort the vector in ascending order using lambda -----
    sort(numbers.begin(), numbers.end(),
         [](int a, int b) { return a < b; }); 
    // Lambda: takes two ints (a, b) and returns true if a < b

    cout << "Sorted numbers: ";
    for_each(numbers.begin(), numbers.end(),
             [](int x) { cout << x << " "; });
    // for_each: applies the lambda to each element
    cout << "\n";

    // ----- 3. Find first number greater than 5 -----
    auto it = find_if(numbers.begin(), numbers.end(),
                      [](int x) { return x > 5; });
    if (it != numbers.end())
        cout << "First number > 5 is: " << *it << "\n";
    else
        cout << "No number > 5 found.\n";

    // ----- 4. Copy even numbers to another vector -----
    vector<int> evens;
    copy_if(numbers.begin(), numbers.end(),
            back_inserter(evens),  // where to put results
            [](int x) { return x % 2 == 0; });
    // Lambda: return true if x is even

    cout << "Even numbers copied: ";
    for_each(evens.begin(), evens.end(),
             [](int x) { cout << x << " "; });
    cout << "\n";

    return 0;
}


