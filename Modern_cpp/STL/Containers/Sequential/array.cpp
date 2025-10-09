//⚙️ Use when size is known at compile time and you need fast random access.
#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> arr = {10, 20, 30, 40, 50};

    cout << "Array elements: ";
    for (int x : arr) cout << x << " ";

    cout << "\nFirst element: " << arr.front();
    cout << "\nLast element: " << arr.back();
}
