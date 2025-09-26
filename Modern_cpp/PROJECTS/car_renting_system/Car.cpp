#include "Car.hpp"

Car::Car(string m, int y, double p) : model(m), year(y), pricePerDay(p), rented(false) {}

void Car::rentCar() { rented = true; }

void Car::returnCar() { rented = false; }

bool Car::isRented() const { return rented; }

double Car::getPrice() const { return pricePerDay; }

string Car::getModel() const {return model; }


ostream& operator<<(ostream& os, const Car& c) {
    os << c.model << " (" << c.year << ") - "
       << (c.rented ? "Rented" : "Available")
       << " | Price: " << c.pricePerDay << "$/day";
    return os;
}
