#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}

    // Overload +
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    void print() const {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Point p1(1, 2), p2(3, 4);
    Point p3 = p1 + p2;   // calls overloaded operator+
    p3.print();           // Output: (4, 6)
}
