#include <iostream>
#include "calculator.hpp"  // include our header

void printMenu() {
    std::cout << "===== Calculator Menu =====\n";
    std::cout << "1. Add\n";
    std::cout << "2. Subtract\n";
    std::cout << "3. Multiply\n";
    std::cout << "4. Divide\n";
    std::cout << "5. Exit\n";
    std::cout << "===========================\n";
}

int main() {
    int choice = 0;
    double a, b;

    while (choice != 5) {
        printMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 4) {
            std::cout << "Enter first number: ";
            std::cin >> a;
            std::cout << "Enter second number: ";
            std::cin >> b;
        }

        switch (choice) {
            case 1:
                std::cout << "Result: " << add(a, b) << "\n";
                break;
            case 2:
                std::cout << "Result: " << subtract(a, b) << "\n";
                break;
            case 3:
                std::cout << "Result: " << multiply(a, b) << "\n";
                break;
            case 4:
                try {
                    std::cout << "Result: " << divide(a, b) << "\n";
                } catch (const std::exception& e) {
                    std::cerr << e.what() << "\n";
                }
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice!\n";
        }
    }

    return 0;
}
