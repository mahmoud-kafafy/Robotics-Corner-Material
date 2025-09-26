#include <iostream>
#include <vector>
#include <limits>
#include "Car.hpp"
#include "Customer.hpp"
#include "VIPCustomer.hpp"
using namespace std;

int main() {
    vector<Car> cars;

    // Create some cars
    cars.push_back(Car("Toyota Corolla", 2020, 50));
    cars.push_back(Car("BMW X5", 2022, 120));
    cars.push_back(Car("Hyundai Elantra", 2021, 60));

    while (true) {
        // --- User input for customer ---
        string name;
        int id;
        int vipChoice;

        cout << "\nEnter your name (or type 'exit' to quit): ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear leftover input
        getline(cin, name);
        if (name == "exit") break;

        cout << "Enter your ID: ";
        cin >> id;
        cout << "Are you VIP? (1 = Yes, 0 = No): ";
        cin >> vipChoice;

        bool isVip = (vipChoice == 1);

        // --- Show available cars ---
        cout << "\nAvailable Cars:\n";
        for (size_t i = 0; i < cars.size(); i++) {
            cout << i + 1 << ". " << cars[i] << endl;
        }

        // --- Choose car ---
        int choice, days;
        cout << "\nEnter the number of the car you want to rent: ";
        cin >> choice;
        cout << "Enter number of days: ";
        cin >> days;

        if (choice < 1 || choice > (int)cars.size()) {
            cout << "Invalid choice!\n";
            continue;
        }

        Car &selectedCar = cars[choice - 1];
        if (selectedCar.isRented()) {
            cout << "Sorry, this car is already rented!\n";
            continue;
        }

        selectedCar.rentCar();

        // --- Create customer only once inside if/else ---
        double cost;
        cout << "\n--- Receipt ---\n";
        if (isVip) {
            VIPCustomer c(name, id);
            c.displayInfo();
            cost = c.calculateDiscount(selectedCar.getPrice() * days);
        } else {
            Customer c(name, id);
            c.displayInfo();
            cost = c.calculateDiscount(selectedCar.getPrice() * days);
        }

        cout << "Car: " << selectedCar.getModel()
             << "\nDays: " << days
             << "\nTotal Cost: $" << cost << endl;

        // --- Show updated cars ---
        cout << "Available Cars:\n";
        for (auto &car : cars) {
            if (!car.isRented()) {   // only print if not rented
                cout << car << endl;
            }
        }
    }

    cout << "\nExiting program... Goodbye!\n";
    return 0;
}


/*
#include <iostream>
#include <vector>
#include <limits>
#include "Car.hpp"
#include "Customer.hpp"
#include "VIPCustomer.hpp"
using namespace std;

int main() {
    vector<Car> cars;

    // Create some cars
    cars.push_back(Car("Toyota Corolla", 2020, 50));
    cars.push_back(Car("BMW X5", 2022, 120));
    cars.push_back(Car("Hyundai Elantra", 2021, 60));

    while (true) {
        // --- User input for customer ---
        string name;
        int id;
        int vipChoice;

        cout << "\nEnter your name (or type 'exit' to quit): ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear leftover input
        getline(cin, name);
        if (name == "exit") break;

        cout << "Enter your ID: ";
        cin >> id;
        cout << "Are you VIP? (1 = Yes, 0 = No): ";
        cin >> vipChoice;

        // Polymorphic pointer
        Customer* customer = nullptr;
        if (vipChoice == 1)
            customer = new VIPCustomer(name, id);
        else
            customer = new Customer(name, id);

        // --- Show available cars ---
        cout << "\nAvailable Cars:\n";
        for (size_t i = 0; i < cars.size(); i++) {
            cout << i + 1 << ". " << cars[i] << endl;
        }

        // --- Choose car ---
        int choice, days;
        cout << "\nEnter the number of the car you want to rent: ";
        cin >> choice;
        cout << "Enter number of days: ";
        cin >> days;

        if (choice < 1 || choice > (int)cars.size()) {
            cout << "Invalid choice!\n";
            delete customer;
            continue;
        }

        Car &selectedCar = cars[choice - 1];
        if (selectedCar.isRented()) {
            cout << "Sorry, this car is already rented!\n";
            delete customer;
            continue;
        }

        selectedCar.rentCar();

        // --- Use polymorphism ---
        cout << "\n--- Receipt ---\n";
        customer->displayInfo();
        double cost = customer->calculateDiscount(selectedCar.getPrice() * days);

        cout << "Car: " << selectedCar.getModel()
             << "\nDays: " << days
             << "\nTotal Cost: $" << cost << endl;

        // --- Show updated cars ---
        cout << "\nUpdated Cars:\n";
        for (auto &car : cars) cout << car << endl;

        delete customer; // free memory
    }

    cout << "\nExiting program... Goodbye!\n";
    return 0;
}

*/