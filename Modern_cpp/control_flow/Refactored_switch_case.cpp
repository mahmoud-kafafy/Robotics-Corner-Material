#include <iostream>
using namespace std;

namespace VendingMachine
{
    enum Product
    {
        BETI_JUICE = 1,
        DOMTI      = 2,
        CORN       = 3
    };

    enum Price
    {
        PRICE_BETI_JUICE = 5,
        PRICE_DOMTI      = 10,
        PRICE_CORN       = 15
    };

    void WelcomeScreen()
    {
        cout << "Welcome to the Vending Machine!\n";
        cout << BETI_JUICE << ") Beti-juice = " << PRICE_BETI_JUICE << " L.E\n";
        cout << DOMTI      << ") Domti      = " << PRICE_DOMTI      << " L.E\n";
        cout << CORN       << ") Corn       = " << PRICE_CORN       << " L.E\n";
    }

    int getInput()
    {
        int cash;
        cout << "Please enter cash: ";
        cin >> cash;
        cout << "You entered " << cash << " L.E\n";
        return cash;
    }

    void Operate(int money)
    {
        int product;
        cout << "Please select the desired product: ";
        cin >> product;

        switch(product)
        {
            case BETI_JUICE:
                cout << "You paid " << money << " L.E. "
                     << "Here is your Beti-juice 🍹\n"
                     << "Remaining: " << (money - PRICE_BETI_JUICE) << " L.E\n";
                break;

            case DOMTI:
                cout << "You paid " << money << " L.E. "
                     << "Here is your Domti 🧀\n"
                     << "Remaining: " << (money - PRICE_DOMTI) << " L.E\n";
                break;

            case CORN:
                cout << "You paid " << money << " L.E. "
                     << "Here is your Corn 🌽\n"
                     << "Remaining: " << (money - PRICE_CORN) << " L.E\n";
                break;

            default:
                cout << "Invalid choice!\n";
                break;
        }
    }
}

int main()
{
    VendingMachine::WelcomeScreen();
    int money = VendingMachine::getInput();
    VendingMachine::Operate(money);
    return 0;
}



