#include "Customer.hpp"
#include <iostream>
using namespace std;

Customer::Customer(string n, int i) : Person(n), id(i) {}

double Customer::calculateDiscount(double price) {
    return price; // no discount
}

void Customer::displayInfo() {
    cout << "Customer ID: " << id << ", Name: " << name << endl;
}

// NEW: rentCar method
    // virtual void rentCar(Car& car, int days) {
    //     double cost = calculateDiscount(car.getPricePerDay() * days);
    //     cout << name << " rented " << car.getModel()
    //          << " for " << days << " days. Total cost = " << cost << endl;
    // }
