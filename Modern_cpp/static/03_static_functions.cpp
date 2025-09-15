//They have internal linkage, accessible only in the same .cpp file.
//Another file cannot call helper().
#include <iostream>
using namespace std;

static void helper() {   // not visible outside this file
    cout << "Helper function called" << endl;
}

int main() {
    helper();  // works
    return 0;
}
