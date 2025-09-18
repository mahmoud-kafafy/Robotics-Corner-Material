// class Point {
//     int x, y; // private by default
// public:
//     Point(int x=0, int y=0) : x(x), y(y) {}
// };

// ostream& operator<<(ostream& os, const Point& p) {
//     os << "(" << p.x << ", " << p.y << ")";  // ❌ ERROR: x and y are private
//     return os;
// }

class Point {
    int x, y; // private
public:
    Point(int x=0, int y=0) : x(x), y(y) {}

    // declare operator<< as a friend
    friend ostream& operator<<(ostream& os, const Point& p);
};

// defined outside
ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";  // ✅ allowed now
    return os;
}
