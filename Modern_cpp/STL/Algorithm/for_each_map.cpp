#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

void printPair(const pair<int, string>& p) {
    cout << p.first << " => " << p.second << endl;
}

int main() {
    map<int, string> m = {
        {1, "Mahmoud"}, {2, "Nada"}, {3, "Ziad"}
    };

    for_each(m.begin(), m.end(), printPair);
}
