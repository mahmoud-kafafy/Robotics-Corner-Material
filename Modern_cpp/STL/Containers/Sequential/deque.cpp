//⚙️ Use when you need fast insertion/deletion from both front and back.
//📘 Key point:
// Efficient at both ends (unlike vector), but slightly slower than vector for pure random access.

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30};
    dq.push_front(5);
    dq.push_back(40);
    dq.pop_front();

    cout << "Deque: ";
    for (int x : dq) cout << x << " ";
}
