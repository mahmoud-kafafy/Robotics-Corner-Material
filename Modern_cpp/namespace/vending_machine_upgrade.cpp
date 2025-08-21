#include <iostream>
#include <cinttypes>

namespace VendingMachine {

    enum Product {
        Juice = 1,
        Domti,
        Corn
    };

    enum Price {
        PRICE_JUICE = 5,
        PRICE_DOMTI = 10,
        PRICE_CORN = 15
    };

    // Namespace variables
    int money{0};
    uint8_t item{0};

    // Function to display menu
    void displayMenu() {
        std::cout << "Choose Product:\n"
                  << "1 - Juice  (" << PRICE_JUICE << " LE)\n"
                  << "2 - Domti  (" << PRICE_DOMTI << " LE)\n"
                  << "3 - Corn   (" << PRICE_CORN << " LE)\n";
    }

    // Function to process purchase
    void buyProduct() {
        switch (item) {
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
                std::cout << "Invalid choice!\n";
                break;
        }
    }
}

int main() {
    std::cout << "Enter money: ";
    std::cin >> VendingMachine::money;
    std::cout << "You Entered = " << VendingMachine::money << " LE\n";

    VendingMachine::displayMenu();

    std::cout << "Please enter your item number: ";
    std::cin >> VendingMachine::item;

    VendingMachine::buyProduct();

    std::cout << "Your remaining money = " << VendingMachine::money << " LE\n";

    return 0;
}
