#include <iostream>
using namespace std;

class Math {
public:
    static int square(int x) {
        return x * x;
    }
};

int main() {
    cout << "Square of 5 = " << Math::square(5) << endl;
    return 0;
}
