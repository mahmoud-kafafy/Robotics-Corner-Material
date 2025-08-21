#include <iostream>
using namespace std;

// 1. Function with no parameters and no return
void sayHello() {
    cout << "Hello, C++!" << endl;
}

// 2. Function with parameters (no return)
void printSum(int a, int b) {
    cout << "Sum = " << (a + b) << endl;
}

// 3. Function with return value
int square(int n) {
    return n * n;
}

// 4. Function with decision making
char getGrade(int score) {
    if (score >= 85) return 'A';
    else if (score >= 75) return 'B';
    else if (score >= 65) return 'C';
    else if (score >= 50) return 'D';
    else return 'F';
}

// 5. Function overloading
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    int choice;
    cout << "=== Function Exercises ===\n";
    cout << "1. Say Hello\n";
    cout << "2. Print Sum of two numbers\n";
    cout << "3. Square of a number\n";
    cout << "4. Get Grade\n";
    cout << "5. Multiply (overloading)\n";
    cout << "Choose exercise (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            sayHello();
            break;

        case 2: {
            int x, y;
            cout << "Enter two numbers: ";
            cin >> x >> y;
            printSum(x, y);
            break;
        }

        case 3: {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            cout << "Square = " << square(num) << endl;
            break;
        }

        case 4: {
            int grade;
            cout << "Enter your grade (0-100): ";
            cin >> grade;
            cout << "Your grade is: " << getGrade(grade) << endl;
            break;
        }

        case 5: {
            int a, b;
            double x, y;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Int multiply: " << multiply(a, b) << endl;

            cout << "Enter two doubles: ";
            cin >> x >> y;
            cout << "Double multiply: " << multiply(x, y) << endl;
            break;
        }

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
