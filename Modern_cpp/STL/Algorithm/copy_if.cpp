#include <iostream>
#include <array>
#include <vector>
#include <algorithm> // for copy_if
using namespace std;

int main() {
    // ================= std::array Example =================
    cout << "=== copy_if with std::array ===" << endl;
    array<int, 7> arr = {5, 2, 8, 1, 3, 6, 4};
    vector<int> result_arr; // store elements that match condition

    // Copy all elements > 4 from array to result_arr
    copy_if(arr.begin(), arr.end(), back_inserter(result_arr), [](int x){ return x > 4; });

    cout << "Elements > 4 in array: ";
    for(int x : result_arr) cout << x << " "; // Output: 5 8 6
    cout << endl << endl;

    // ================= std::vector Example =================
    cout << "=== copy_if with std::vector ===" << endl;
    vector<int> v = {7, 4, 9, 1, 6, 8, 2};
    vector<int> evens;

    // Copy all even numbers
    copy_if(v.begin(), v.end(), back_inserter(evens), [](int x){ return x % 2 == 0; });

    cout << "All even elements in vector: ";
    for(int x : evens) cout << x << " "; // Output: 4 6 8 2
    cout << endl;

    return 0;
}

/*
1️⃣ back_inserter(container)

Adds elements at the end of a container.

Works with containers that support push_back() like vector, deque, list.

vector<int> v;
copy_if(arr.begin(), arr.end(), back_inserter(v), [](int x){ return x>4; });

2️⃣ front_inserter(container)

Adds elements at the front of a container.

Works with containers that support push_front() like deque or list.

deque<int> d;
copy_if(arr.begin(), arr.end(), front_inserter(d), [](int x){ return x>4; });


Adds in reverse order compared to back_inserter.

3️⃣ inserter(container, iterator_position)

Inserts elements at any specific position in a container.

Works with containers like vector, set, list, etc.

vector<int> v = {1,2,3,4};
auto it = v.begin() + 2; // position after second element
copy_if(arr.begin(), arr.end(), inserter(v, it), [](int x){ return x>4; });


Elements from arr are inserted starting at the iterator position.
*/
