#include <iostream>
using namespace std;

int main()
{
    int grade{0};
    cout << "Please enter your grade: ";
    cin >> grade;

    if (grade < 50)
    {
        cout << "Failed\n";
    }
    else if (grade >= 50 && grade < 65)
    {
        cout << "Your grade is D\n";
    }
    else if (grade >= 65 && grade < 75)
    {
        cout << "Your grade is C\n";
    }
    else if (grade >= 75 && grade < 85)
    {
        cout << "Your grade is B\n";
    }
    else if (grade >= 85 && grade <= 100)
    {
        cout << "Your grade is A\n";
    }
    else
    {
        cout << "Invalid grade! Please enter between 0 and 100.\n";
    }

    return 0;
}