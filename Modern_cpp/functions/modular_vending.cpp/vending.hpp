#ifndef VENDING_HPP
#define VENDING_HPP

#include <cinttypes>

// Enums for products and prices
enum Product 
{
    Juice = 1,
    Domti,
    Corn
};

enum Price 
{
    PRICE_JUICE = 5,
    PRICE_DOMTI = 10,
    PRICE_CORN = 15
};

// Function declarations
void printMenu();
int chooseProduct(uint8_t item, int money);

#endif
