//⚙️ Use when size changes often at the end, and random access is needed.
//📘 Key point:
//Fast access, slow insert/remove in the middle (due to shifting elements).

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.insert(v.begin() + 1, 10);  // insert at index 1
    v.pop_back();                 // remove last

    cout << "Vector: ";
    for (int x : v) cout << x << " ";
    cout << "\nSize: " << v.size();
}
