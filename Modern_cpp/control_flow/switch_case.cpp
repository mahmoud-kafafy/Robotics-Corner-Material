#include <iostream>
using namespace std;

int main()
{
    int money, product;

    cout << "Enter money: ";
    cin >> money;

    cout << "Choose product:\n";
    cout << "1) Beti-juice = 5 L.E\n";
    cout << "2) Domti      = 10 L.E\n";
    cout << "3) Corn       = 15 L.E\n";
    cin >> product;

    if (product == 1)
        cout << "Here is Beti-juice 🍹\nRemaining: " << money - 5 << " L.E\n";
    else if (product == 2)
        cout << "Here is Domti 🧀\nRemaining: " << money - 10 << " L.E\n";
    else if (product == 3)
        cout << "Here is Corn 🌽\nRemaining: " << money - 15 << " L.E\n";
    else
        cout << "Invalid choice!\n";

    return 0;
}

