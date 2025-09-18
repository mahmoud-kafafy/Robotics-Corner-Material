#include <iostream>
using namespace std;

// Forward declaration
class Point;

// Overload operator<< for Point
ostream& operator<<(ostream& os, const Point& p);

class Point {
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}
    int getX() const { return x; }
    int getY() const { return y; }

    // Friend so operator<< can access private members if needed
    friend ostream& operator<<(ostream& os, const Point& p);
};

// Define the function
ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p.getX() << ", " << p.getY() << ")";
    return os; // return the same stream
}

int main() {
    Point p(3, 4);
    cout << "The point is: " << p << endl;
}
