#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << "\n"; // 10
    cout << "Back: " << q.back() << "\n";   // 30

    q.pop(); // removes 10

    cout << "After pop, new front: " << q.front() << "\n"; // 20

    // ✅ You can’t do:
    // q[0];      ❌ invalid
    // q.begin(); ❌ no iterator
}
