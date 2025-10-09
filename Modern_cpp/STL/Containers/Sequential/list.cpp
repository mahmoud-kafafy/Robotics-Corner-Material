//⚙️ Use when frequent insert/delete in the middle and no random access needed.
//📘 Key point:
// Fast insertion/deletion anywhere, but can’t do lst[2] (no random access).
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {1, 2, 3, 4};
    lst.push_front(0);
    lst.push_back(5);
    lst.remove(3); // removes all 3s

    cout << "List: ";
    for (int x : lst) cout << x << " ";

    lst.reverse();
    cout << "\nReversed: ";
    for (int x : lst) cout << x << " ";
}
