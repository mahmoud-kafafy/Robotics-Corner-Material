#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout << "=== find_if Example ===" << endl;

    // std::array: find first element > 4
    array<int,5> arr = {5, 2, 8, 1, 3};
    auto it_arr = find_if(arr.begin(), arr.end(), [](int x){ return x > 4; });
    if(it_arr != arr.end()) cout << "First element in array > 4: " << *it_arr << endl;

    // std::vector: find first even element
    vector<int> v = {7, 4, 9, 1, 6};
    auto it_v = find_if(v.begin(), v.end(), [](int x){ return x % 2 == 0; });
    if(it_v != v.end()) cout << "First even element in vector: " << *it_v << endl;

    return 0;
}
