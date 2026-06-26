// wap to create number guessing game.
#include <iostream>
using namespace std;

int main() {
    int secretNumber, guess;

    cout << "Enter the secret number: ";
    cin >> secretNumber;

    cout << "Guess the number!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Correct! You guessed the number." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}