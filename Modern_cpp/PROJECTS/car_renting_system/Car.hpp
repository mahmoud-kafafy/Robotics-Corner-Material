#ifndef CAR_HPP
#define CAR_HPP

#include <string>
#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;
    double pricePerDay;
    bool rented;
public:
    Car(string m, int y, double p);
    void rentCar();
    void returnCar();
    bool isRented() const;
    double getPrice() const;
    string getModel() const;

    friend ostream& operator<<(ostream& os, const Car& c);
};

#endif
