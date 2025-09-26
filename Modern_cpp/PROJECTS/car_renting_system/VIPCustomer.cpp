#include "VIPCustomer.hpp"

VIPCustomer::VIPCustomer(string n, int i) : Customer(n, i) {}

double VIPCustomer::calculateDiscount(double price) {
    return price * 0.9; // 10% discount
}

//  void rentCar(Car& car, int days) override {
//         double cost = calculateDiscount(car.getPricePerDay() * days);
//         cout << "VIP " << name << " rented " << car.getModel()
//              << " for " << days << " days. Discounted cost = " << cost << endl;
//     }