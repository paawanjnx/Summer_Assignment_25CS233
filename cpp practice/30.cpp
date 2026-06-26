// railway train bookings.
#include <iostream>
using namespace std;

int main() {
    int age, coach;

    cout << "WELCOME TO RAILWAY TICKET BOOKINGS!\n";

    cout << "Please enter your age: ";
    cin >> age;

    cout << "\nCoach Types:\n";
    cout << "1. AC (Rs 500)\n";
    cout << "2. Non AC (Rs 250)\n";

    cout << "Enter your coach choice (1 or 2): ";
    cin >> coach;

    if (age >= 60) {
        if (coach == 1)
            cout << "\nFare is Rs 350";
        else if (coach == 2)
            cout << "\nFare is Rs 150";
        else
            cout << "\nInvalid coach choice!";

        cout << "\nSenior citizen discount applied successfully!";
    }
    else {
        if (coach == 1)
            cout << "\nFare is Rs 500";
        else if (coach == 2)
            cout << "\nFare is Rs 250";
        else
            cout << "\nInvalid coach choice!";

        cout << "\nRegular charges applied.";
    }

    return 0;
}