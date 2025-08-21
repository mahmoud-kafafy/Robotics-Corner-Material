#include <iostream>
using namespace std;

int main() {
    // -------- For Loop --------
    cout << "For Loop Example:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "i = " << i << endl;
    }

    cout << "\n"; // line break

    // -------- While Loop --------
    cout << "While Loop Example:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << "j = " << j << endl;
        j++;
    }

    cout << "\n"; // line break

    // -------- Do While Loop --------
    cout << "Do While Loop Example:" << endl;
    int k = 1;
    do {
        cout << "k = " << k << endl;
        k++;
    } while (k <= 5);

    return 0;
}
