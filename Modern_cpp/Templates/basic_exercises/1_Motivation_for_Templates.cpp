#include <iostream>
using namespace std;

int addInt(int a, int b) {
    return a + b;
}

double addDouble(double a, double b) {
    return a + b;
}

int main() {
    cout << addInt(3, 5) << endl;       // 8
    cout << addDouble(2.5, 4.1) << endl; // 6.6
}
