//Global variable restricted to one translation unit (.cpp file).
#include <iostream>
using namespace std;

static int globalCounter = 0;  // only accessible in this file

void increment() {
    globalCounter++;
    cout << "Global counter = " << globalCounter << endl;
}

int main() {
    increment();
    increment();
    return 0;
}
