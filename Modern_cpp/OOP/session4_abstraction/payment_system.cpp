#include <iostream>
#include <vector>
using namespace std;

// Abstract base class
class Payment {
public:
    virtual void pay(double amount) const = 0; // pure virtual function
    virtual ~Payment() {}
};

// Derived classes
class CreditCardPayment : public Payment {
public:
    void pay(double amount) const override {
        cout << "Paid $" << amount << " using Credit Card." << endl;
    }
};

class PayPalPayment : public Payment {
public:
    void pay(double amount) const override {
        cout << "Paid $" << amount << " using PayPal." << endl;
    }
};

class CashPayment : public Payment {
public:
    void pay(double amount) const override {
        cout << "Paid $" << amount << " in Cash." << endl;
    }
};

// Function that accepts any payment method
void checkout(const Payment& payment, double amount) {
    payment.pay(amount); // abstraction: we don’t care *how* it’s paid
}

int main() {
    CreditCardPayment card;
    PayPalPayment paypal;
    CashPayment cash;

    // Same function works for all payment methods
    checkout(card, 100.0);
    checkout(paypal, 50.0);
    checkout(cash, 20.0);


    /*
        // Create derived objects, but store them in Payment* (base class pointers)
        Payment* p1 = new CreditCardPayment();
        Payment* p2 = new PayPalPayment();
        Payment* p3 = new CashPayment();

        // All work via base class
        checkout(p1, 100.0);
        checkout(p2, 50.0);
        checkout(p3, 20.0);

        // Clean up
        delete p1;
        delete p2;
        delete p3;
    */

    return 0;
}
