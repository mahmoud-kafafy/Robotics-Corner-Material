#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = std::move(v1);

    cout << "v2 size = " << v2.size() << "\n";
    cout << "v1 size = " << v1.size() << " (now empty)\n";
}
