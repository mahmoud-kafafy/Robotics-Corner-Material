#include <iostream>
using namespace std;

int main()
{
    int secretNumber = 7;
    int guess;

    cout << "Guess the secret number (1-10): ";
    cin >> guess;

    if (guess != secretNumber)  // true if guess is NOT equal to secretNumber
    {
        cout << "Wrong guess! Try again.\n";
    }
    else
    {
        cout << "Correct! You guessed the secret number.\n";
    }

    return 0;
}
