// ✅ Key points:

// No duplicates.

// Sorted automatically.

// count(x) returns 1 or 0.

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {5, 1, 3, 3, 2};

    s.insert(4);
    s.erase(1);

    cout << "Set elements (sorted, unique): ";
    for (int x : s) cout << x << " ";

    cout << "\nIs 3 in set? " << (s.count(3) ? "Yes" : "No");
}
