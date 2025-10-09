#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    // Define iterator
    vector<int>::iterator it;

    cout << "Vector elements: ";
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";  // Dereference to get value
}
