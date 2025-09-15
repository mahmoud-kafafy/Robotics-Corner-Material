#include <iostream>
using namespace std;

void counter() {
    static int count = 0;  // initialized once
    count++;
    cout << "Function called " << count << " times" << endl;
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}
