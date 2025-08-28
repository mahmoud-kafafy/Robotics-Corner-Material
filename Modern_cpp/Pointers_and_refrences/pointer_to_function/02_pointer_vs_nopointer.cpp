#include <iostream>
using namespace std;

int add(int x, int y) { return x + y; }
int multiply(int x, int y) { return x * y; }

void compute(int a, int b, int (*callback)(int, int)) {
    cout << "Result = " << callback(a, b) << endl;
}

int main() {
    // Array of function pointers
    int (*funcs[])(int,int) = { add, multiply };

    int choice;
    cout << "Enter 0 for add, 1 for multiply: ";
    cin >> choice;

    if (choice >= 0 && choice < 2) {
        compute(5, 3, funcs[choice]);
    } else {
        cout << "Invalid choice!\n";
    }
}


/*

#include <iostream>
using namespace std;

int add(int x, int y) { return x + y; }
int multiply(int x, int y) { return x * y; }

int main() {
    int choice;
    cout << "Enter 0 for add, 1 for multiply: ";
    cin >> choice;

    if (choice == 0) {
        cout << "Result = " << add(5, 3) << endl;
    }
    else if (choice == 1) {
        cout << "Result = " << multiply(5, 3) << endl;
    }
    else {
        cout << "Invalid choice!\n";
    }
}

*/
