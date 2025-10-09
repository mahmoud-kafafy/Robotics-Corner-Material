#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Ali"}, {2, "Ziad"}, {3, "Hager"}};

    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
        cout << it->first << " => " << it->second << endl;
}
