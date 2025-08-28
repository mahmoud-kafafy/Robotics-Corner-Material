#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout << "=== for_each Example ===" << endl;

    // std::array
    array<int,5> arr = {5, 2, 8, 1, 3};
    cout << "Array elements: ";
    for_each(arr.begin(), arr.end(), [](int x){ cout << x << " "; });
    cout << endl;

    // std::vector
    vector<int> v = {7, 4, 9, 1, 6};
    cout << "Vector elements: ";
    for_each(v.begin(), v.end(), [](int x){ cout << x << " "; });
    cout << endl;

    return 0;
}
