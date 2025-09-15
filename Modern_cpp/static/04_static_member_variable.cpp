#include <iostream>
using namespace std;

class Employee {
public:
    static int count;   // declaration
    Employee() { count++; }
};

// definition (must be outside class)
int Employee::count = 0;

int main() {
    Employee e1, e2, e3;
    cout << "Total employees = " << Employee::count << endl;
    return 0;
}
