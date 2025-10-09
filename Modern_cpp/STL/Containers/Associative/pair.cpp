#include <iostream>
#include <utility> // for std::pair
using namespace std;

int main() {
    pair<int, string> p1(1, "Mahmoud");
    cout << "ID: " << p1.first << ", Name: " << p1.second << endl;
}
