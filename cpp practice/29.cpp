//parking fee calculator 
#include <iostream>
using namespace std;

int main() {
    float fee, hours;

    cout << "Welcome to the parking slot";
    cout << "\nKindly select the duration (in hours) you need the parking for: ";
    cin >> hours;

    if (hours >= 2 && hours < 3) {
        fee = 50 * hours;
        cout << "Parking fee in Rs is = " << fee << endl;
    }
    else if (hours >= 3 && hours < 5) {
        fee = 75 * hours;
        cout << "Parking fee in Rs is = " << fee << endl;
    }
    else {
        cout << "Sorry, no parking available";
    }

    cout << "\nThank you for using our service!";
    return 0;
}