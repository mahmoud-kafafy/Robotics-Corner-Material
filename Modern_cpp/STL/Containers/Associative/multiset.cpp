// ✅ Key points:

// Keeps duplicates.

// Still sorted.

// erase(value) removes all instances; erase(iterator) removes one.

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {1, 2, 2, 3, 3, 3};
    ms.insert(2);
    ms.erase(ms.find(3));  // removes only one '3'

    cout << "Multiset: ";
    for (int x : ms) cout << x << " ";

    cout << "\nCount of 2s: " << ms.count(2);
}
