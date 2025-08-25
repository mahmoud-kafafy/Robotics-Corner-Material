#include <iostream>
using namespace std;

int main() {
    int rows = 5;  // number of lines

    for (int i = 1; i <= rows; i++) {        // loop for rows
        for (int j = 1; j <= i; j++) {       // loop for stars
            cout << "*";
        }
        cout << endl;  // move to next line
    }

    return 0;
}
