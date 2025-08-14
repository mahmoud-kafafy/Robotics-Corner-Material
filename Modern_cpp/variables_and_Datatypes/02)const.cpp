#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159; // Cannot be changed
    int radius = 5;
    double area = PI * radius * radius;
    cout << "Circle area: " << area << "\n";
    return 0;
}
