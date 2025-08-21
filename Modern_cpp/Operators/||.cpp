#include <iostream>
using namespace std;

int main()
{
    int age{0};
    cout << "Please enter your age: ";
    cin >> age;

    if (age < 0 || age > 120)   // invalid if less than 0 OR greater than 120
    {
        cout << "Invalid age! Age must be between 0 and 120.\n";
    }
    else if (age < 18)
    {
        cout << "You are a minor.\n";
    }
    else
    {
        cout << "You are an adult.\n";
    }

    return 0;
}
