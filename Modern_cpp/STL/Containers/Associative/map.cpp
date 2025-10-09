
// ✅ Key points:

// Automatically sorted by key (string order here).

// Keys must be unique.

// You can access like an array (grades["Ali"]).

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> grades;
    grades["Ali"] = 90;
    grades["Nada"] = 85;
    grades["Mahmoud"] = 95;

    grades["Nada"] = 88; // updates value (keys are unique)
    grades.erase("Ali");

    cout << "Student grades:\n";
    for (auto &p : grades)
        cout << p.first << " -> " << p.second << "\n";

    cout << "Find Mahmoud: " << grades["Mahmoud"];
}
