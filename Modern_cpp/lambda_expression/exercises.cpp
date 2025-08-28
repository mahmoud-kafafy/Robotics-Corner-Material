#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

  

int main() {
    cout << "=== 1. Basic Lambda ===" << endl;
    auto add = [](int a, int b) { return a + b; };
    cout << "Sum: " << add(5, 3) << endl; // Output: 8

    cout << "\n=== 2. Lambda with Capture ===" << endl;
    int x = 10;
    auto printX = [x]() { cout << "x = " << x << endl; }; // capture by value
    printX(); // Output: x = 10

    auto modifyX = [&x]() { x += 5; cout << "Modified x = " << x << endl; }; // capture by reference
    modifyX(); // x becomes 15
    cout << "x in main = " << x << endl; // Output: 15

    cout << "\n=== 3. Lambda with for_each ===" << endl;
    vector<int> v = {1, 2, 3, 4, 5};
    for_each(v.begin(), v.end(), [](int n){ cout << n*2 << " "; });
    cout << endl; // Output: 2 4 6 8 10

    cout << "\n=== 4. Lambda modifying external variable ===" << endl;
    int total = 0;
    for_each(v.begin(), v.end(), [&total](int n){ total += n; });
    cout << "Total = " << total << endl; // Total = 15

    cout << "\n=== 5. Lambda as callback ===" << endl;
    auto compute = [](int a, int b, auto callback) {
        cout << "Result = " << callback(a, b) << endl;
    };
    
    auto addd = [](int x,int y){ return x+y; };
    auto multt = [](int x,int y){ return x*y; };
    compute(5, 3,addd); // Result = 15
    compute(5, 3, multt); // Result = 8

    return 0;
}
