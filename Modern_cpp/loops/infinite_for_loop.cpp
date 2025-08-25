#include <iostream>
using namespace std;

int main() {
    int count = 0;

    for (;;) { // infinite loop
        cout << "Loop iteration: " << count << endl;
        count++;

        if (count == 5) {
            cout << "Breaking the loop!" << endl;
            break; // exit the loop
        }
    }

    return 0;
}
