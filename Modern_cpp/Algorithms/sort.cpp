#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout << "=== sort Example ===" << endl;

    // std::array
    array<int,5> arr = {5, 2, 8, 1, 3};
    sort(arr.begin(), arr.end());
    cout << "Sorted array: ";
    for_each(arr.begin(), arr.end(), [](int x){ cout << x << " "; });
    cout << endl;

    // std::vector
    vector<int> v = {7, 4, 9, 1, 6};
    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for_each(v.begin(), v.end(), [](int x){ cout << x << " "; });
    cout << endl;

    return 0;
}
