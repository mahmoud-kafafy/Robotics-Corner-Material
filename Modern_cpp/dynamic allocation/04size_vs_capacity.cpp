#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    cout << "Initially -> size: " << v.size()
         << ", capacity: " << v.capacity() << endl;

    // Add elements one by one
    for (int i = 1; i <= 10; i++) {
        v.push_back(i);
        cout << "After push_back(" << i << ") -> "
             << "size: " << v.size()
             << ", capacity: " << v.capacity() << endl;
    }

    // Remove some elements
    for (int i = 0; i < 5; i++) {
        v.pop_back();
        cout << "After pop_back -> "
             << "size: " << v.size()
             << ", capacity: " << v.capacity() << endl;
    }

    return 0;
}

/*
🔹 Key Notes:

size changes every time we add/remove elements.

capacity usually grows exponentially (often doubles).

capacity does not shrink when removing elements (unless you force it with shrink_to_fit()).

*/


/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // Reserve memory for 5 elements
    v.reserve(5);

    cout << "Initially -> size: " << v.size()
         << ", capacity: " << v.capacity() << endl;

    // Add 5 elements
    for (int i = 1; i <= 5; i++) {
        v.push_back(i);
        cout << "After push_back(" << i << ") -> "
             << "size: " << v.size()
             << ", capacity: " << v.capacity() << endl;
    }

    // Add the 6th element (this will force capacity growth)
    v.push_back(6);
    cout << "After push_back(6) -> "
         << "size: " << v.size()
         << ", capacity: " << v.capacity() << endl;

    return 0;
}
*/