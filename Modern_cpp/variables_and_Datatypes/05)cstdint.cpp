#include <iostream>
#include <cstdint> // For uint16_t, uint32_t, etc.
using namespace std;

int main() {
    uint16_t smallNumber = 65000;     // 16-bit unsigned integer (0 to 65535)
    uint32_t bigNumber   = 4000000000; // 32-bit unsigned integer (0 to 4,294,967,295)

    cout << "Small number (uint16_t): " << smallNumber << "\n";
    cout << "Big number   (uint32_t): " << bigNumber << "\n";

    // You can also print their sizes
    cout << "Size of uint16_t: " << sizeof(uint16_t) << " bytes\n";
    cout << "Size of uint32_t: " << sizeof(uint32_t) << " bytes\n";

    return 0;
}
