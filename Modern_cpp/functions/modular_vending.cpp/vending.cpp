#include "vending.hpp"
#include <iostream>

void printMenu()
{
    std::cout << "Choose Product: \n"
              << "1 - Juice  (5 LE)\n"
              << "2 - Domti  (10 LE)\n"
              << "3 - Corn   (15 LE)\n";
}

int chooseProduct(uint8_t item, int money)
{
    switch (item)
    {
    case Juice:
        std::cout << "You chose Juice\n";
        money -= PRICE_JUICE;
        break;
    case Domti:
        std::cout << "You chose Domti\n";
        money -= PRICE_DOMTI;
        break;
    case Corn:
        std::cout << "You chose Corn\n";
        money -= PRICE_CORN;
        break;
    default:
        std::cout << "Invalid selection\n";
        break;
    }
    return money;
}
