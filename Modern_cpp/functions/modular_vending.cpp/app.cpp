#include "vending.hpp"
#include <iostream>

int main()
{
    int money{0};
    uint8_t item;

    std::cout << "Enter money: ";
    std::cin >> money;
    std::cout << "You entered = " << money << " LE\n";

    printMenu();

    std::cout << "Please enter your item: ";
    std::cin >> item;

    money = chooseProduct(item, money);

    std::cout << "Your Money = " << money << " LE\n";

    return 0;
}
