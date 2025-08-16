#include <iostream>
using namespace std;

namespace Calculator {
    double first_num, second_num;
    char operation;

    void getInput() {
        cout << "Enter first number: ";
        cin >> first_num;

        cout << "Enter operation (+ or -): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> second_num;
    }

    double add() {
        return first_num + second_num;
    }

    double sub() {
        return first_num - second_num;
    }

    void Apply() {
        switch (operation) {
            case '+':
                cout << "Result = " << add() << "\n";
                break;
            case '-':
                cout << "Result = " << sub() << "\n";
                break;
            default:
                cout << "Invalid operation!\n";
        }
    }
}

int main() {
    Calculator::getInput();
    Calculator::Apply();
    return 0;
}