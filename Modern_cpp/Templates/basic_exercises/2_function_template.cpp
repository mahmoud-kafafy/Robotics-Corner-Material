#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add<int>(3, 5) << endl;       // 8
    cout << add<double>(2.5, 4.1) << endl; // 6.6
    //cout << add(10, 20) << endl;       // compiler deduces T = int
    //cout << add(3.5, 1.2) << endl;     // compiler deduces T = double
    cout << add<string>("Hello ", "World") << endl; // Hello World
}
