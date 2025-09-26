#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include "Person.hpp"

class Customer : public Person {
protected:
    int id;
public:
    Customer(string n, int i);
    virtual double calculateDiscount(double price);
    void displayInfo() override;
};

#endif
