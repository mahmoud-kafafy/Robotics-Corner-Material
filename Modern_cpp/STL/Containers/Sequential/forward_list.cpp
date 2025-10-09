//⚙️ Use when you need lightweight linked structure with only forward traversal.
// 📘 Key point:
// Uses less memory than list, but can only move forward (++it, no --it).
#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fl = {1, 2, 3};
    fl.push_front(0);

    auto it = fl.begin();
    fl.insert_after(it, 10); // after first element

    cout << "Forward List: ";
    for (int x : fl) cout << x << " ";
}
